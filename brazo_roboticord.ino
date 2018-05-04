
// Brazo Robotico con 4 Servos 
// version 1.0
// creado por: Rayner bermudez, Daniel oquendo
//modificado por: Rayner bermudez, Daniel oquendo 
// ultima modificacion 04/05/2018

#include <Servo.h>
#define initBase 90 //Posicion inicial de la base
#define initIzquierda 80 //Posicion inicial del hombro iquierdo
#define initDerecha 20 //Posicion inicial del hombro derecho
#define initGarra 0 //Posicion inicial de la garra
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
//Posicion inicial del brazo.
 Base.attach(pinBase);
 Izquierda.attach(pinIzquierda);
 Garra.attach(pinGarra);
 Derecha.attach(pinDerecha);
 Izquierda.write(initIzquierda);
 Derecha.write(initDerecha);
 Base.write(initBase);
 Garra.write(initGarra);
 delay(1000);
 
}

void loop() 
{ 
  //Mover hacia la izquierda o la derecha.
  if(BanderaBase==0)
  {
    
    Base.write(Base.read()-1);
    delay(10);
    if(Base.read()==0)
    {
      BanderaBase=1;}}

if(BanderaBase==1)
  {
    
    Base.write(Base.read()+1);
    delay(10);
    if(Base.read()==180)
    {

      BanderaGarra=0;
      //Abrir garra
      if(BanderaGarra==0)
  {
    
    Garra.write(Garra.read()+1);
    delay(20);
    if(Garra.read()==5)
      {
        BanderaDerecha=0;
      }
      }
      }}
      
//Mover Base hacia derecha.
  if(BanderaDerecha==0)
  {
   
 Derecha.write(Derecha.read()+1);
    delay(10);
    if(Derecha.read()==100)
    {
      
      BanderaDerecha=1;}
    }
    //Subir Hombro Derecho.
    if(BanderaDerecha==1)
  {
   
   
 Derecha.write(Derecha.read()-1);
    delay(10);
    if(Derecha.read()==20)
    {
      
      BanderaBase=2;}
    }
    //Mover base hacia la izquierda.
       if(BanderaBase==2)
  {
    
    Base.write(Base.read()+1);
    delay(10);
    if(Base.read()==180)
    { 
       BanderaBase=3;}}
//Mover base hacia la derecha.
if(BanderaBase==3)
  {
    
    Base.write(Base.read()-1);
    delay(10);
    if(Base.read()==0)
    { 
      BanderaIzquierda=0;
      //Subir hombro izquierdo.
if(BanderaIzquierda==0)
  {
    
    Izquierda.write(Izquierda.read()+1);
    delay(20);
    if(Izquierda.read()==15)
    {
      BanderaIzquierda=0;}}
     
       BanderaBase=0;
      }
      BanderaIzquierda=1;
      //Bajar hombro izquierdo.
      if(BanderaIzquierda==1)
  {
    
    Izquierda.write(Izquierda.read()+1);
    delay(20);
    if(Izquierda.read()==20)
    {
    
      BanderaIzquierda=0;
      BanderaBase=0;
      }}

      
    }
    
 
    

}
