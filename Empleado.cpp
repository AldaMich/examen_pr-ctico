#include "Empleado.h"

// Constructor por defecto
Empleado::Empleado()
{
    sueldo = 0; // Valor arbitrario de 0 en sueldo
}
// Constructor sobrecargado
Empleado::Empleado(string nom, int d, string m, float suel):Persona(nom, d, m){ // Manda a llamar al constructor sobrecargado de la clase Persona
    sueldo = suel;
}

Empleado::~Empleado()
{
    // Destructor
}
// Función set del atributo sueldo
void  Empleado::setSueldo(float x){
    sueldo = x;
}
// Función get del atributo sueldo
float Empleado::getSueldo(){
    return sueldo;
}
// Función que asigna nombre, cumpleaños y sueldo a un empleado.
void Empleado::setDatos(string nom, int d, string m, float suel){
   nombre = nom;
   cumple.setFecha(d, m);
   sueldo = suel;
}
// Función que aumenta o disminuye el sueldo de un empleado en cierto porcentaje.
void Empleado::modificaSueldo(float por, string op){
    // Condicionales para que el primer argumento solo pueda ser un decimal entre 0 y 1
    while (por < 0 || por > 1){
        cout << "El primer argumento debe ser el porcentaje en decimal entre 0 y 1.\nVuelve a ingresarlo: ";
        cin >> por;
        cout << endl;
    }
    // Condicionales para que el segundo argumento solo pueda ser las palabras <aumento> o <rebaja>
    while (op != "aumento" && op != "rebaja"){
        cout << "El segundo argumento debe ser <aumento> o <rebaja>.\nVuelve a ingresarlo: ";
        cin >> op;
        cout << endl;
    }
    // Calculo del nuevo sueldo
    if (op == "aumento"){
        sueldo += sueldo * por;
    }
    else{
        if(op == "rebaja"){
            sueldo -= sueldo * por;
        }
    }
    // Despliegue en consola del nuevo sueldo
    cout << "El nuevo sueldo del empleado " << nombre << " es de $" << sueldo << ".\n";
}
// Retorna una cadena con el nombre, la fecha de nacimiento y el sueldo de un empleado.
string Empleado::imprimeDatos(){
    return nombre + ", " + cumple.getFecha() + ", $" + to_string(sueldo) + ".\n";
}
