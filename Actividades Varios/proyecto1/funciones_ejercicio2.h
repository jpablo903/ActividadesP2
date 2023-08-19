#ifndef FUNCIONES_EJERCICIO2_H_INCLUDED
#define FUNCIONES_EJERCICIO2_H_INCLUDED

///Prototipos
void obtenerListado(int (*m)[5], int, int);
void cargarDatos(int (*m)[5], int, int);

void ponerEnCero(int (*m)[5], int fila, int col){
    for(int i=0; i<fila; i++){
        for(int j=0; j<col; j++){
            m[i][j]=0;
        }
    }
}

void menu(int (*mat)[5], int fila, int col){
    int opc;

    cout << "1. Realizar Ingreso de Datos.";
    cout << "\n2. Consultar Gastos Mensuales y el Mayor Gasto en dia.";
    cout << "\nOpcion: ";
    cin >> opc;

    switch(opc){
        case 1:
            cargarDatos(mat, fila, col);
            menu(mat, fila, col);
        break;
        case 2:
            obtenerListado(mat, fila, col);
            menu(mat, fila, col);
        break;
    }




}

void obtenerListado(int (*mat)[5], int fila, int col){
    int acu;
    int pos;
    int vectorMeses[2]{0};
    int vectorDias[5]{0};

    for(int i=0; i<fila; i++){
            acu=0;
           // maximoGastoDia=mat[i][0];
            pos=0;
        for(int j=0; j<col; j++){
            if(mat[i][j]>mat[i][pos])
            pos=j;
            acu+=mat[i][j];
        }
        vectorMeses[i]=acu;
        vectorDias[i]=mat[i][pos];
    }

    for(int i=0; i<fila; i++){
        cout <<"\nGastos Total Mes "<< i+1 << " - con un total de: " << vectorMeses[i] << endl;
        cout <<"Se gasto mas el dia: " << pos+1 <<" - con un total de: " << vectorDias[i] << endl;
    }
}

void cargarDatos(int (*m)[5], int fila, int col){
    int dia=0, mes=0;
    float importe=0;

    system("cls");

    cout << "Ingrese el mes: ";
    cin >> mes;
    while(mes !=0){
        cout << "Ingrese el dia: ";
        cin >> dia;
        cout << "Ingrese el importe: ";
        cin >> importe;
        m[mes-1][dia-1]+=importe;

        system("cls");
        cout << "Ingrese el mes: ";
        cin >> mes;
    }
    system("cls");
}

#endif // FUNCIONES_EJERCICIO2_H_INCLUDED
