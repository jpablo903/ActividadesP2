#ifndef FUNCIONES_EJERCICIO3_H_INCLUDED
#define FUNCIONES_EJERCICIO3_H_INCLUDED

///Prototipos de Funcion
//void ponerCero(int *m, int);
void cargarDatos(int (*m)[31]);
void mostrarDatos(int (*m)[31]);

void menu(){

    char v[5]{'a','b','c','d','e'};
    int mat[12][31]{0};

    for(int i=0; i<5; i++){

    }


   // ponerCero(mat, 12, 31);
    cargarDatos(mat);
    mostrarDatos(mat);


}

void cargarDatos(int (*mat)[31][5]){

    int dia;
    int mes;
    float importe;
    char codVendedor;

    cout << "Ingrese el dia: ";
    cin >> dia;

    while (dia!=0){
        cout << "Ingrese el mes: ";
        cin >> mes;
        cout << "Ingrese importe: ";
        cin >> importe;
        cout << "Ingrese Vendedor: ";
        cin >> codVendedor;

        //

        cout << "Ingrese el dia: ";
        cin >> dia;
    }
}



#endif // FUNCIONES_EJERCICIO3_H_INCLUDED
