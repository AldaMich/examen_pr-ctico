#ifndef PERSONA_H
#define PERSONA_H

#include "Fecha.h"

class Persona
{
    public:
        Persona();
        virtual ~Persona();
        Persona(string,int,string);

        void setNombre(string);
        string getNombre();

        string getDatos();

    protected:
        string nombre;
        Fecha cumple;

    private:

};

#endif // PERSONA_H
