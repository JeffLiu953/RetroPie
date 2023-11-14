#include<Arduino.h>
#include<Keyboard.h>
#include"myButton/src/myButton.h"
//button
Button * btn = new Button();
bool lit = true;


void setup(){
  pinMode(btn->getUp(), INPUT_PULLUP);
  pinMode(btn->getDown(), INPUT_PULLUP);
  pinMode(btn->getLeft(), INPUT_PULLUP);
  pinMode(btn->getRight(), INPUT_PULLUP);
  pinMode(btn->getA(), INPUT_PULLUP);
  pinMode(btn->getB(), INPUT_PULLUP);
  pinMode(btn->getX(), INPUT_PULLUP);
  pinMode(btn->getY(), INPUT_PULLUP);
  pinMode(btn->getHotkey(), INPUT_PULLUP);
  pinMode(btn->getStart(), INPUT_PULLUP);
  pinMode(btn->getSelect(), INPUT_PULLUP);
  Serial.begin(9600);
  Keyboard.begin();
}
void loop(){
  if(digitalRead(btn->getUp()) == LOW){ btn->upPressed(); }
  if(digitalRead(btn->getDown()) == LOW){ btn->downPressed(); }
  if(digitalRead(btn->getLeft()) == LOW){ btn->leftPressed(); }
  if(digitalRead(btn->getRight()) == LOW){ btn->rightPressed(); }
  if(digitalRead(btn->getA()) == LOW){ btn->aPressed(); }
  if(digitalRead(btn->getB()) == LOW){ btn->bPressed(); }
  if(digitalRead(btn->getX()) == LOW){ btn->xPressed(); }
  if(digitalRead(btn->getY()) == LOW){ btn->yPressed(); }
  if(digitalRead(btn->getStart()) == LOW){ btn->startPressed(); }
  if(digitalRead(btn->getHotkey()) == LOW){ btn->hotkeyPressed(); }
  if(digitalRead(btn->getSelect()) == LOW){ btn->selectPressed(); }
  delay(50);
}