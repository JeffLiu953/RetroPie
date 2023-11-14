#include<Arduino.h>
#include<Keyboard.h>
//button class
class Button{
private:
    int up;
    int down;
    int left;
    int right;
    int A;
    int B;
    int X;
    int Y;
    int hotkey;
    int start;
    int select;
public:
    //constructor
    Button();
    Button(int up, int down, int left, int right, int A, int B, int X, int Y, int hotkey, int start, int select);
    //get functions
    int getUp();
    int getDown();
    int getLeft();
    int getRight();
    int getA();
    int getB();
    int getX();
    int getY();
    int getHotkey();
    int getStart();
    int getSelect();
    //pressed
    void upPressed();
    void downPressed();
    void leftPressed();
    void rightPressed();
    void aPressed();
    void bPressed();
    void xPressed();
    void yPressed();
    void hotkeyPressed();
    void startPressed();
    void selectPressed();
};
//constructor
Button::Button(){
    up = 2;
    down = 3;
    left = 4;
    right = 5;
    A = 6;
    B = 7;
    X = 8;
    Y = 9;
    hotkey = 10;
    start = 11;
    select = 12;
}
Button::Button(int up, int down, int left, int right, int A, int B, int x, int y, int hotkey, int start, int select){
    this->up = up;
    this->down = down;
    this->left = left;
    this->right = right;
    this->A = A;
    this->B = B;
    this->X = X;
    this->Y = y;
    this->hotkey = hotkey;
    this->start = start;
    this->select = select;
}
//get functions
int Button::getUp(){ return up; }
int Button::getDown(){ return down; }
int Button::getLeft(){ return left; }
int Button::getRight(){ return right; }
int Button::getA(){ return A; }
int Button::getB(){ return B; }
int Button::getX(){ return X; }
int Button::getY(){ return Y; }
int Button::getHotkey(){ return hotkey; }
int Button::getStart(){ return start; }
int Button::getSelect(){ return select; }
//button behaviour
void Button::upPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('w');
        lastDebounceTime = millis();
    }
}
void Button::downPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('s');
        lastDebounceTime = millis();
    }
}
void Button::leftPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('a');
        lastDebounceTime = millis();
    }
}
void Button::rightPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('d');
        lastDebounceTime = millis();
    }
}
void Button::aPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('n');
        lastDebounceTime = millis();
    }
}
void Button::bPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('l');
        lastDebounceTime = millis();
    }
}
void Button::xPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('x');
        lastDebounceTime = millis();
    }
}
void Button::yPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('y');
        lastDebounceTime = millis();
    }
}
void Button::hotkeyPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write(' ');
        lastDebounceTime = millis();
    }
}
void Button::startPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('k');
        lastDebounceTime = millis();
    }
}
void Button::selectPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 200;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('p');
        lastDebounceTime = millis();
    }
}