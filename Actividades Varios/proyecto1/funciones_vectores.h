#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

void buscarMinimo(int *vect, int n){
    int minimo= vect[0];
    for(int i=1; i<n; i++){
        if(vect[i]<minimo){
            minimo=vect[i];
        }
    }
    cout << "El minimo es: " << minimo << endl;
}

void buscarMaximo(int *vect, int n){
    int maximo=vect[0];
    for(int i=1; i<n; i++){
        if(vect[i]>maximo){
            maximo=vect[i];
        }
    }
    cout << "El maximo es: " << maximo << endl;
}

void buscarPostMinimo(int *vect, int n){
    int pos=0;
    for(int i=1; i<n; i++){
        if(vect[i]<vect[pos]){
            pos=i;
        }
    }
    cout << "La posicion del minimo es: " << pos << endl;
}

void buscarPostMaximo(int *vect, int n){
    int pos=0;
    for(int i=1; i<n; i++){
        if(vect[i]>vect[pos]){
            pos=i;
        }
    }
    cout << "La posicion del maximo es: " << pos << endl;

}

void buscarValor(int *v, int valor){
    bool b = false;
    for(int i=0; i<10; i++){
        if(v[i]==valor)
            b=true;
    }
    cout << b << endl;
}

void buscarPosValor(int *v, int valor){
    int pos= -1;
    for(int i=0; i<10; i++){
        if(v[i]==valor)
            pos=i;
    }
    cout <<"La posicion del valor es: " << pos << endl;
}

void contarValor(int *vect, int valor){
    int contador=0;
    for(int i=0; i<10; i++){
        if(vect[i]==valor)
            contador++;
    }
    cout << contador << endl;
}


#endif // FUNCIONES_H_INCLUDED
