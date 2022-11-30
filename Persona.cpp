#include "Persona.h"

Persona::Persona()
{
    nombre="sd";
}

Persona::~Persona()
{
    //dtor
}

Persona::Persona(string nom, int d, string m){
    nombre=nom;
    cumple.setFecha(d,m);
}

void Persona::setNombre(string x){
    nombre=x;
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getDatos(){
    return ("Nombre: "+nombre+"\n Fecha nacimiento: "+cumple.getFecha());
}
