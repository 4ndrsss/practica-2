/* 3. Cree un programa donde use un archivo de cabecera donde esté la clase Trabajador.
      Se debe ingresar mediante el teclado el sueldo mensual, sueldo por hora extra y la cantidad de
      horas extras trabajadas para calcular el dinero que obtuvo el trabajador en un año.*/

#include <iostream>
#include "Cabecera.h"

using namespace std;

int main(){
    int mes, horasExt, numHorasExt;
    cout << "ingrese los datos de un trabajador\n"
         << endl;
    cout << "ingrese el sueldo mensual:";
    cin >> mes;
    cout << endl;
    cout << "ingrese el sueldo por hora extra:";
    cin >> horasExt;
    cout << endl;
    cout << "ingrese la cantidad de horas extras trabajadas:";
    cin >> numHorasExt;
    cout << endl;
    Trabajador empleado(mes, horasExt, numHorasExt);
    cout << "El sueldo anual del trabajador es: $" << empleado.sueldo() << endl;
    return 0;
}
