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
    int R;
    int L;
    int reset;
public:
    //constructor
    Button();
    Button(int up, int down, int left, int right, int A, int B, int X, int Y, int R, int L, int reset);
    //get functions
    int getUp();
    int getDown();
    int getLeft();
    int getRight();
    int getA();
    int getB();
    int getX();
    int getY();
    int getR();
    int getL();
    int getReset();
    //pressed
    void upPressed();
    void downPressed();
    void leftPressed();
    void rightPressed();
    void aPressed();
    void bPressed();
    void xPressed();
    void yPressed();
    void rPressed();
    void lPressed();
    void resetPressed();
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
    R = 10;
    L = 11;
    reset = 12;
}
Button::Button(int up, int down, int left, int right, int A, int B, int X, int Y, int R, int L, int reset){
    this->up = up;
    this->down = down;
    this->left = left;
    this->right = right;
    this->A = A;
    this->B = B;
    this->X = X;
    this->Y = Y;
    this->R = R;
    this->L = L;
    this->reset = reset;
}
//get functions
int Button::getUp(){
    return up;
}
int Button::getDown(){
    return down;
}
int Button::getLeft(){
    return left;
}
int Button::getRight(){
    return right;
}
int Button::getA(){
    return A;
}
int Button::getB(){
    return B;
}
int Button::getX(){
    return X;
}
int Button::getY(){
    return Y;
}
int Button::getR(){
    return R;
}
int Button::getL(){
    return L;
}
int Button::getReset(){
    return reset;
}
//button behaviour
void Button::upPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('w');
        lastDebounceTime = millis();
    }
}
void Button::downPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('s');
        lastDebounceTime = millis();
    }
}
void Button::leftPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('a');
        lastDebounceTime = millis();
    }
}
void Button::rightPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('d');
        lastDebounceTime = millis();
    }
}
void Button::aPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('A');
        lastDebounceTime = millis();
    }
}
void Button::bPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('B');
        lastDebounceTime = millis();
    }
}
void Button::xPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('X');
        lastDebounceTime = millis();
    }
}
void Button::yPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('Y');
        lastDebounceTime = millis();
    }
}
void Button::rPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('R');
        lastDebounceTime = millis();
    }
}
void Button::lPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('L');
        lastDebounceTime = millis();
    }
}
void Button::resetPressed(){
    static unsigned long lastDebounceTime = 0;
    unsigned long debounceDelay = 50;
    if (millis() - lastDebounceTime > debounceDelay) {
        Keyboard.write('f');
        lastDebounceTime = millis();
    }
}