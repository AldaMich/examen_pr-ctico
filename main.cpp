#include "Empleado.h"

int main()
{
    // Imprime los datos del alumno en la consola.
    cout<<"Datos de la alumna.\nNombre: Alda Michelle Sandoval Gonzalez\nMatricula: A01750910\nCampus: Estado de Mexico" << endl;

    // Genera 3 objetos del tipo empleado usando los dos constructores.
    Empleado empleado_gael("Jesus Gael Vazquez Estrada", 28, "febrero", 50000); //Empleado 0
    Empleado empleado_alda; // Empleado 1
    Empleado empleado_luis; // Empleado 2

    // Agrega datos faltantes con los diferentes métodos.
    empleado_alda.setDatos("Alda Michelle Sandoval Gonzalez", 18, "diciembre", 20000);
    empleado_luis.setDatos("Luis", 24, "noviembre", 10);
    empleado_luis.setNombre("Luis Gutierrez Perez");
    empleado_luis.setSueldo(10000);

    // Mostrar en consola los datos de los 3 objetos creados.
    cout << "\nSe mostraran los datos de los 3 empleados creados.\n";
    cout << empleado_gael.imprimeDatos();
    cout << empleado_alda.imprimeDatos();
    cout << empleado_luis.imprimeDatos();

    // Modificar y mostrar el sueldo de dos empleados (aumento y reduccion).
    cout << "\nAhora vamos a aumentar y rebajar el sueldo de algunos empleados.\n";

    cout << "El sueldo anterior del empleado " << empleado_luis.getNombre() << " era de $" << empleado_luis.getSueldo() << ", pero se le hizo un aumento del 25%." << endl;
    empleado_luis.modificaSueldo(0.25,"aumento"); // Aumento del 25% de su salario (12,500).

    cout << "\nEl sueldo anterior del empleado " << empleado_gael.getNombre() << " era de $" << empleado_gael.getSueldo() << ", pero se le hizo una rebaja del 15%." << endl;
    empleado_gael.modificaSueldo(0.15,"rebaja"); // Reducción del 15% de su salario (42,500).

    // Como en el método modifica sueldo ya se imprime el sueldo no es necesario volver a imprimir.
    // Pero por razones demostrativas se hará de nuevo.
    cout << "\nEsta es otra forma de mostar el cambio en los sueldos.\n";

    cout << empleado_luis.getNombre() << " tiene un nuevo sueldo de $" << empleado_luis.getSueldo() << ".\n";
    cout << empleado_gael.getNombre() << " tiene un nuevo sueldo de $" << empleado_gael.getSueldo() << ".\n";

    // Ahora vamos a asignar el sueldo del empleado Luis al empleado Alda.
    cout << "\nAsignaremos el sueldo del empleado Luis, al sueldo de la empleada Alda.\n";

    float sueldo_anterior = empleado_alda.getSueldo();
    empleado_alda.setSueldo(empleado_luis.getSueldo());

    cout << "El sueldo anterior del empleado " + empleado_alda.getNombre() + " era de $" + to_string(sueldo_anterior)
            + "\nAhora su sueldo es de $" + to_string(empleado_alda.getSueldo());
    cout << endl;

    return 0;
}
