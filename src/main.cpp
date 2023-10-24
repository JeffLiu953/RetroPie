#include<Arduino.h>
#include<Keyboard.h>
#include"myButton/src/myButton.h"
//button
Button * btn = new Button();

void setup(){
  pinMode(btn->getUp(), INPUT_PULLUP);
  pinMode(btn->getDown(), INPUT_PULLUP);
  pinMode(btn->getLeft(), INPUT_PULLUP);
  pinMode(btn->getRight(), INPUT_PULLUP);
  pinMode(btn->getA(), INPUT_PULLUP);
  pinMode(btn->getB(), INPUT_PULLUP);
  pinMode(btn->getX(), INPUT_PULLUP);
  pinMode(btn->getY(), INPUT_PULLUP);
  pinMode(btn->getR(), INPUT_PULLUP);
  pinMode(btn->getL(), INPUT_PULLUP);
  pinMode(btn->getReset(), INPUT_PULLUP);
  Serial.begin(9600);
  Keyboard.begin();
}
void loop(){
  if(digitalRead(btn->getUp()) == LOW){
    btn->upPressed();
  }
  if(digitalRead(btn->getDown()) == LOW){
    btn->downPressed();
  }
  if(digitalRead(btn->getLeft()) == LOW){
    btn->leftPressed();
  }
  if(digitalRead(btn->getRight()) == LOW){
    btn->rightPressed();
  }
  if(digitalRead(btn->getA()) == LOW){
    btn->aPressed();
  }
  if(digitalRead(btn->getB()) == LOW){
    btn->bPressed();
  }
  if(digitalRead(btn->getX()) == LOW){
    btn->xPressed();
  }
  if(digitalRead(btn->getY()) == LOW){
    btn->yPressed();
  }
  if(digitalRead(btn->getR()) == LOW){
    btn->rPressed();
  }
  if(digitalRead(btn->getL()) == LOW){
    btn->lPressed();
  }
  if(digitalRead(btn->getReset()) == LOW){
    btn->resetPressed();
  }
}