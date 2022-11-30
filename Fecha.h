#ifndef FECHA_H
#define FECHA_H
#include<string>
#include <iostream>

using namespace std;

class Fecha { // clase fecha que será un objeto de otra clase
     public: // los métodos son públicos
     Fecha();
     virtual ~Fecha();

     void setFecha(int,string);
     int getDia();
     string getMes();

     void setDia(int);
     void setMes(string);

     string getFecha();

     private: // los atributos son privados (encapsulamiento)

     int dia;
     string mes;
};

#endif // FECHA_H
