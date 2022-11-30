#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <Persona.h>


class Empleado : public Persona // Clase Empleado es hija de clase Persona (relaci�n es un).
{
    public:
        Empleado(); // Constructor por defecto.
        Empleado(string, int, string, float); // Constructor sobrecargado.
        virtual ~Empleado(); // Destructor.

        void setSueldo(float); // Funci�n set del atributo sueldo.
        float getSueldo(); // Funci�n get del atributo sueldo.

        void setDatos(string, int, string, float); // Funci�n que asigna nombre, cumplea�os y sueldo a un empleado.
        void modificaSueldo(float, string); // Funci�n que aumenta o disminuye el sueldo de un empleado en cierto porcentaje.
        string imprimeDatos(); // Retorna una cadena con el nombre, la fecha de nacimiento y el sueldo de un empleado.

    protected:

    private:
        float sueldo;
};

#endif // EMPLEADO_H
