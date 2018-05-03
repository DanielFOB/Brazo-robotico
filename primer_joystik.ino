
#include <Servo.h>


Servo joystik1;
int angulo = 90 ;
int Eje_x = A2 ;
int Eje_y = A1 ;
int boton = 5 , LED = 8 ;



void setup() {
               
                joystik1.attach(6); //conectar joystik1 al pin 6
                pinMode (boton, INPUT_PULLUP) ; 
                

             }
void loop ()
             {
              angulo = map (analogRead (A2), 0, 1024, 0, 180);
              joystik1.write(angulo);
              if (! digitalRead(boton))
                    digitalWrite(LED, HIGH);
              else 
                   digitalWrite(LED,LOW);
              delay (250);                
             }


             

