
// Brazo Robotico con 4 Servos 
// version 1.0
// creado por: Rayner bermudez, Daniel oquendo
//modificado por: Rayner bermudez, Daniel oquendo 
// fecha de modificacion 04/05/2018

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
  if(BanderaBase==0)
  {
    
    Base.write(Base.read()-1);
    delay(30);
    if(Base.read()==0)
    {
      BanderaBase=1;}}

if(BanderaBase==1)
  {
    
    Base.write(Base.read()+1);
    delay(20);
    if(Base.read()==180)
    {

      BanderaGarra=0;//aqui 
      if(BanderaGarra==0)
  {
    
    Garra.write(Garra.read()+1);
    delay(30);
    if(Garra.read()==5)
      {
        BanderaDerecha=0;
      }
      }
      }}
      

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
      
      BanderaBase=2;}
    }
       if(BanderaBase==2)
  {
    
    Base.write(Base.read()+1);
    delay(30);
    if(Base.read()==180)
    {
      BanderaBase=3;}}

if(BanderaBase==3)
  {
    
    Base.write(Base.read()-1);
    delay(20);
    if(Base.read()==0)
    { 
      BanderaBase=0;
      }
    }
    

}
