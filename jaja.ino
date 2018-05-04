#include <Servo.h>
#define initBase 90
#define initIzquierda 170
#define initDerecha 20
#define initGarra 0
#define pinBase 12
#define pinIzquierda 13
#define pinDerecha 10
#define pinGarra 11
Servo Izquierda, Derecha, Garra, Base;
int BanderaBase=0;
int BanderaIzquierda=0;
int BanderaDerecha=0;
int BanderaGarra=0;

void setup() 
{
 Base.attach(pinBase);
 Izquierda.attach(pinIzquierda);
 Garra.attach(pinGarra);
 Derecha.attach(pinDerecha);
 Izquierda.write(initIzquierda);
 Derecha.write(initDerecha);
 Base.write(initBase);
 Garra.write(initGarra);
 
}

void loop() 
{ 
  

  if(BanderaDerecha==0)
  {
   
 Derecha.write(Derecha.read()+1);
    delay(20);
    if(Derecha.read()==100)
    {
      BanderaDerecha=1;}
    }
    if(BanderaDerecha==1)
  {
   
   
 Derecha.write(Derecha.read()-1);
    delay(20);
    if(Derecha.read()==20)
    {
      BanderaBase=0;
      BanderaDerecha=0;
      BanderaGarra=0;
      BanderaIzquierda=0;}
    }

}
