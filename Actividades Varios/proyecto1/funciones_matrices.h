#ifndef FUNCIONES_MATRICES_H_INCLUDED
#define FUNCIONES_MATRICES_H_INCLUDED

void buscarMaximoEnFila(int (*mat)[4], int fila, int col, int valor){

    int maximo=mat[valor][0];

    for(int i=0; i<fila; i++){
        for(int j=1; j<col; j++){
            if(mat[i][j]> mat[valor][j])
                maximo=mat[valor][j];
        }
    }
    cout << "El maximo es: " << maximo << endl;
}

void buscarMaximoPosEnFila(int (*mat)[4], int fila, int col, int valor){

    int pos=valor;

    for(int i=0; i<fila; i++){
        for(int j=1; j<col; j++){
            if(mat[i][j]>mat[pos][j])
                pos=i;
        }
    }
    cout << "La posicion es: " << pos << endl;
}

void sumaDeColumnas(int (*mat)[4], int fila, int col, int valor){

    int acu=0;
    for(int i=0; i<fila; i++){
        for(int j=0; j<col; j++){
        }
        acu+=mat[i][valor];
    }
    cout << "La suma de las columnas indicadas en: " << valor << " es: " << acu << endl;
}

void contadorDePositivos(int (*mat)[4], int fila, int col, int valor){

    int contador{0};
    for(int i=0; i<fila; i++){
        for(int j=0; j<col; j++){
        }
        if (mat[i][valor]>0)
        contador++;
    }
    cout << "La cantidad de positivos son " << contador << endl;
}

void sumaTotal(int (*m)[4], int fila, int col){

    int total{0};
    for(int i=0; i<fila; i++){
        for(int j=0; j<col; j++){
            total+=m[i][j];
        }
    }

    cout << "El total de la suma de toda la matriz es: " << total << endl;

}


#endif // FUNCIONES_MATRICES_H_INCLUDED
