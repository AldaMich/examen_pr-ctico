#include "Fecha.h"

Fecha::Fecha(){
 dia=1;
 mes="Enero";
}

Fecha::~Fecha(){
 //destructor
}

void Fecha::setFecha(int d, string m){
 dia = d;
 mes = m;
}

int Fecha::getDia(){
    return dia;
}
string Fecha::getMes(){
    return mes;
}

void Fecha::setDia(int x){
    dia=x;
}

void Fecha::setMes(string x){
    mes=x;
}

string Fecha::getFecha(){
    return to_string(dia)+" de "+mes;
}
