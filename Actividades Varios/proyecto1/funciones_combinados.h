#ifndef FUNCIONES_COMBINADOS_H_INCLUDED
#define FUNCIONES_COMBINADOS_H_INCLUDED

///Prototipos de Funciones
void cargarDatos(int (*m)[3], int, int);
void ponerEnCero(int (*m)[3], int , int);
void puntoA(int (*m)[3], int, int);
void puntoB(int (*m)[3], int, int);

void menu(int (*matVentas)[3], int fila, int col){

    int opc;

    cout << ">>SISTEMA DE VENTAS<<" <<endl;
    cout << "1. Cargar Articulos" <<endl;
    cout << "2. Mostrar Listado." <<endl;
    cout << "3. Informar Art mas vendido" <<endl;
    cout << "4. Salir"<<endl;
    cout << "Opcion: ";
    cin >> opc;

    switch (opc){
        case 1:
            cargarDatos(matVentas, fila, col);
            menu(matVentas, fila, col);
        break;
        case 2:
            puntoA(matVentas, fila, col);
            menu(matVentas, fila, col);
        break;
        case 3:
            puntoB(matVentas, fila, col);
            menu(matVentas, fila, col);
        break;
        case 4:
        break;
    }
}

void cargarDatos(int (*m)[3], int fila, int col){

    int numArticulo, sucursal, cantidad;

    system ("cls");

    cout << "\nIngresar Numero de Articulo del 1 al 5: ";
    cin >> numArticulo;
    while(numArticulo !=0){
        cout << "\nIngresar Numero de Sucursal del 1 al 3: ";
        cin >> sucursal;
        cout << "\nIngresar Cantidad Vendida: ";
        cin >> cantidad;

        m[numArticulo-1][sucursal-1]=cantidad;

        system("cls");
        cout << "\nIngresar Numero de Articulo del 1 al 5: ";
        cin >> numArticulo;

    }
     system("cls");
}

void ponerEnCero(int (*m)[3], int fila, int col){
    for(int i=0; i<fila; i++){
        for(int j=0; j<col; j++){
            m[i][j]=0;
        }
    }
}

void puntoA(int (*m)[3], int fila, int col){
    system("cls");
    for(int i=0; i<fila; i++){
        cout << "Articulo " << i+1 << ": ";
        for(int j=0; j<col; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    system("cls");
}

void puntoB(int (*m)[3], int fila, int col){
    int maximoS1=m[0][0];
    int maximoS2=m[0][1];
    int maximoS3=m[0][2];

    for(int i=0; i<fila; i++){
        for(int j=0; j<col; j++){
            if(j==0){
                if(m[i][j]>maximoS1)
                maximoS1=m[i][j];
            }else if (j<2){
                if(m[i][j]>maximoS2)
                maximoS2=m[i][j];
            }else{
                if(m[i][j]>maximoS3)
                maximoS3=m[i][j];
            }

        }
    }
    cout << "El maximo de la sucursal 1 es: " << maximoS1 << endl;
    cout << "El maximo de la sucursal 2 es: " << maximoS2 << endl;
    cout << "El maximo de la sucursal 3 es: " << maximoS3 << endl;
    system("pause");
    system("cls");
}

#endif // FUNCIONES_COMBINADOS_H_INCLUDED
