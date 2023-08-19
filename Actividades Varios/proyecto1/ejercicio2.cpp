//Nombre:Juan Pablo Rajoy
//TP Nº:
//Ejercicio Nº:

#include <iostream>
using namespace std;
#include "funciones_ejercicio2.h"

int main2(){
/*
Una persona ha anotado sus gastos, día a día, durante todo el año pasado. Para cada gasto ha confeccionado el siguiente registro:
- Mes (de 1 a 12)
- Día (de 1 a 31)
- Importe del Gasto (en $)
Esta persona puede haber efectuado varios gastos en el mismo día, y desea obtener un listado con el gasto total de cada mes, y el día de mayor gasto total en cada mes y su monto.
Los registros vienen desordenados y el último se indica con mes igual a cero.
Confeccionar un programa C que resuelva este problema.
*/
    const int fila=2;
    const int col=5;

    int mat[fila][col];
    ponerEnCero(mat, fila, col);
    menu(mat, fila, col);


return 0;
}
