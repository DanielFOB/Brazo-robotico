#include <Servo.h>
#define initBase 90
#define initIzquierda 170
#define initDerecha 20
#define initGarra 0
Servo Izquierda, Derecha, Garra, Base;

void setup() 
{
 Base.attach(12);
 Izquierda.attach(13);
 Garra.attach(11);
 Derecha.attach(10);
 Izquierda.write(initIzquierda);
 Derecha.write(initDerecha);
 Base.write(initBase);
 Garra.write(initGarra);
}

void loop() {
  // put your main code here, to run repeatedly:

}
