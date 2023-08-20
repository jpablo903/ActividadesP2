#include <iostream>
#include <cstring>

using namespace std;
void cargarCodigo(char *codigo, int tamanio){
    int i;
    fflush(stdin);
    for (i=0; i<tamanio; i++){
        codigo[i]=cin.get();
        if (codigo[i]=='\n'){
            break;
        }
    }
    codigo[i]='\0';
    fflush(stdin);
}

void cargarDescripcion(char *descripcion, int tamanio){
    int i;
    fflush(stdin);
    for (i=0; i<tamanio; i++){
        descripcion[i]=cin.get();
        if (descripcion[i]=='\n'){
            break;
        }
    }
    descripcion[i]='\0';
    fflush(stdin);
}

class Articulo{
    private:
        char _codigo[5], _descripcion[30];
        float _precio;
        int _stock;
        bool _estado;
    public:

        void cargar();
        void mostrar();
        ///Get & Set
        const char* getCodigo()const {
            return _codigo;
        }
        void setCodigo(char *codigo){
            strcpy(_codigo, codigo);
        }

        const char* getDescripcion(){
            return _descripcion;
        }
        void setDescripcion(char *descripcion){
            strcpy(_descripcion, descripcion);
        }

        float getPrecio(){
            return _precio;
        }
        void setPrecio(float precio){
            _precio = precio;
        }

        int getStock(){
            return _stock;
        }
        void setPrecio(int stock){
            _stock = stock;
        }

        bool getEstado(){
            return _estado;
        }
        void setEstado(bool estado){
            _estado=estado;
        }


        ///Constructor
        Articulo(){}

        Articulo(char *cod, char *descrip, float precio, int stock, bool estado){
            strcpy(_codigo, cod);
            strcpy(_descripcion, descrip);
            _precio=precio;
            _stock=stock;
            _estado=estado;
        }

};

void Articulo::cargar(){
    cout << "Ingresar Codigo: ";
    cargarCodigo(_codigo, 5);
    cout << "Ingresar Descripcion: ";
    cargarDescripcion(_descripcion, 30);
    cout << "Ingresar precio: ";
    cin >> _precio;
    cout << "Ingresar stock: ";
    cin >> _stock;
    cout << "Ingresar estado(1 - disponible/ 0 - No disponible): ";
    cin >> _estado;
}
void Articulo::mostrar(){
    cout << "Codigo     : " << _codigo << endl;
    cout << "Descripcion: " << _descripcion << endl;
    cout << "Precio     : " << _precio << endl;
    cout << "Stock      : " << _stock << endl;
    cout << "Estado     : " << _estado << endl;
}

///Prototipos
void cargarArticulos(Articulo *);
void listarArticulo(Articulo *);
void listarArticuloPorCodigo(Articulo *);
int buscarPosicion(Articulo *);
int buscarArticulo(Articulo *);
void buscarArticuloConMenorStock(Articulo *);
void modificarPrecio(Articulo *a);

int main(){
    int opc;

    Articulo a[10];

    while(true){

        cout << "SISTEMA DE GESTION" << endl;
        cout << "1. Cargar Articulos" << endl;
        cout << "2. Listar Articulos" << endl;
        cout << "3. Listar Articulos mayor a valor" << endl;
        cout << "4. Buscar posicion del articulo por codigo" << endl;
        cout << "5. Describir Articulo por codigo"<< endl;
        cout << "6. Buscar articulos inferior a stock"<< endl;
        cout << "7. Aumentar el precio de los articulos"<< endl;
        cout << "0. Salir"<< endl;
        cout << "Selecciones una opcion: ";
        cin >> opc;

        system("cls");
        switch(opc){
            case 1:
                cargarArticulos(a);
            break;
            case 2:
                listarArticulo(a);
            break;
            case 3:
                listarArticuloPorCodigo(a);
            break;
            case 4:
                buscarPosicion(a);
            break;
            case 5:
                buscarArticulo(a);
            break;
            case 6:
                buscarArticuloConMenorStock(a);
            break;
            case 7:
                modificarPrecio(a);
            break;
            case 0:
                return 0;
            break;
        }

    }

return 0;
}

void cargarArticulos(Articulo *a){
    for(int i=0;i<3; i++){
        a[i].cargar();
        cout << endl;
    }
    system("cls");
}

void listarArticulo(Articulo *a){
    system("cls");

    if(a[1].getPrecio()!=0){
        cout << "Listado de Articulos" << endl;
        for(int i=0; i<3; i++){
            cout << "Articulo " << i+1 << ": " << a[i].getDescripcion() << endl;
        }
        system("pause");
        system("cls");
    }else{
        cout << "No hay registros en sistema." << endl;
         system("pause");
        system("cls");
    }
}

void listarArticuloPorCodigo(Articulo *a){
    float valor;
    cout << "Ingrese un valor: ";
    cin >> valor;

    for(int i=0; i<3; i++){
        if(a[i].getPrecio()>valor){
            cout << "Articulo: " << a[i].getDescripcion() << endl;
        }
    }
    system("pause");
    system("cls");
}

int buscarPosicion(Articulo *a){

    char cod[5];

    cout << "Ingrese un codigo: ";
    cin >> cod;
    for (int i = 0; i < 3; i++) {
        if (strcmp(a[i].getCodigo(),cod)==0){
            cout << "La posicion del codigo " << a[i].getCodigo() << " es: " << i+1 << endl;
            system("pause");
            system("cls");
        }
    }
    cout << "-1" << endl;
    system("pause");
    system("cls");
    return -1;

}

int buscarArticulo(Articulo *a){

    char cod[5];

    cout << "Ingrese un codigo: ";
    cin >> cod;
    for (int i = 0; i < 3; i++) {
        if (strcmp(a[i].getCodigo(),cod)==0){
            system("cls");
            cout << "Codigo     : " << a[i].getCodigo() << endl;
            cout << "Descripcion: " << a[i].getDescripcion() << endl;
            cout << "Precio     : " << a[i].getPrecio() << endl;
            cout << "Stock      : " << a[i].getStock() << endl;
            cout << "Estado     : " << a[i].getEstado() << endl;
            system("pause");
            system("cls");
            return 1;
        }
    }
    cout << "-1" << endl;
    system("pause");
    system("cls");
    return -1;
}

void buscarArticuloConMenorStock(Articulo *a){
    int valor;
    int contador=0;

    cout << "Ingrese valor de stock ";
    cin >> valor;

    for(int i=0; i<3; i++){
        if(valor > a[i].getStock()){
            contador++;
        }
    }
    cout << "La cantidad de articulos infeior al numero de stock indicados son: " << contador << endl;
    system("pause");
    system("cls");
}

void modificarPrecio(Articulo *a){
    float valor, precioActual, aumento, precioTotal;

    /*for(int i=0; i<3; i++){
        cout << "Precios Actuales: " << a[i].getPrecio() << endl;
    }*/

    cout << "Ingrese el valor de aumento: ";
    cin >> valor;

    for(int i=0; i<3; i++){
       precioActual=a[i].getPrecio();
       aumento = (precioActual*valor)/100;
       precioTotal=aumento+precioActual;
       a[i].setPrecio(precioTotal);
    }
    /*for(int i=0; i<3; i++){
        cout << "Precios Nuevos: " << a[i].getPrecio() << endl;
    }*/
    cout << "Aumentos Realizados con exitos!" << endl;
    system("pause");
    system("cls");
}
