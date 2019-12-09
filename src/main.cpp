#include <Arduino.h>
//SENSORES
#define SENSOR1 A0
#define SENSOR2 A1
#define SENSOR3 A2
#define SENSOR4 A3
#define SENSOR5 A6
#define SENSOR6 A7

//numero de sensores
#define SENSORNO 6

//motor direito
#define RIGHT_PWM 9
#define RIGHT_IN2 7
#define RIGHT_IN1 8

#define STBY 6 //HABILITA A LOCOMOÇÃO

//MOTOR ESQUERDO
#define LEFT_IN1 4
#define LEFT_IN2 5
#define LEFT_PWM 3

//PORTAS BLUETOOTH
#define BLUETOOTH_TX 10
#define BLUETOOTH_RX 11

void setup() {
    Serial.begin(9600);
    pinMode(RIGHT_PWM, OUTPUT);
    pinMode(RIGHT_IN1, OUTPUT);
    pinMode(RIGHT_IN2, OUTPUT);

    pinMode(LEFT_PWM, OUTPUT);
    pinMode(LEFT_IN1, OUTPUT);
    pinMode(LEFT_IN2, OUTPUT);



    pinMode(STBY, OUTPUT);
}

void loop() {
    //linha reta
    if (analogRead(SENSOR3)<100 && analogRead(SENSOR4)<100){
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 255);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 255);
    }
    //curva para a direita
    else if(analogRead(SENSOR2)<100 && analogRead(SENSOR3)<100){
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 20);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 100);
    }
    //curva para a direita
    else if(analogRead(SENSOR2)<100 && analogRead(SENSOR1)<100){
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 20);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 100);
    }
    //curva para a direita
    else if (analogRead(SENSOR2)<100)
    {
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 20);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 100);
    }
    //curva para a direita
    else if (analogRead(SENSOR1)<100)
    {
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 20);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 100);
    }
    //curva para a esquerda
     else if(analogRead(SENSOR4)<100 && analogRead(SENSOR5)<100){
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 100);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);        
        analogWrite(LEFT_PWM, 55);
    }
    //curva para a esquerda
     else if(analogRead(SENSOR5)<100 && analogRead(SENSOR6)<100){
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 100);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 40);
    }
    //curva para a esquerda
    else if (analogRead(SENSOR5)<100)
    {
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 100);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 30);
    }
    //curva para a esquerda
    else if (analogRead(SENSOR6)<100)
    {
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 100);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 40);
    }
    //reta para a esquerda
    else if (analogRead(SENSOR4)<100)
    {
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 100);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 70);
    }
    //reta para a direita
     else if (analogRead(SENSOR3)<100)
    {
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 70);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 100);
    }
    //curva para a esquerda
     else if(analogRead(SENSOR4)<100 
            && analogRead(SENSOR5)<100 
            && analogRead(SENSOR6)<100) {
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 100);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 40);
    }
       //curva para a esquerda
     else if(analogRead(SENSOR3)<100
            && analogRead(SENSOR4)<100 
            && analogRead(SENSOR5)<100 
            && analogRead(SENSOR6)<100) {
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 100);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 40);
    }
    //curva para a direita
     else if(analogRead(SENSOR1)<100 
        && analogRead(SENSOR2)<100 
        && analogRead(SENSOR3)<100){
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 40);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 100);
    }
    //curva para a direita
     else if(analogRead(SENSOR1)<100 
        && analogRead(SENSOR2)<100 
        && analogRead(SENSOR3)<100
        && analogRead(SENSOR4)<100){
        digitalWrite(STBY, HIGH);
      
        digitalWrite(RIGHT_IN1, HIGH);
        digitalWrite(RIGHT_IN2, LOW);
        analogWrite(RIGHT_PWM, 40);

        digitalWrite(LEFT_IN1, LOW);
        digitalWrite(LEFT_IN2, HIGH);
        analogWrite(LEFT_PWM, 100);
    }
    
    //parado
    else{
        digitalWrite(STBY, LOW);
    }    
}