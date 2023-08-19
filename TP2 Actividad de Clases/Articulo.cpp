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

class Archivo{
    private:
        char _codigo[5], _descripcion[30];
        float _precio;
        int _stock;
        bool _estado;
    public:

        void cargar();
        void mostrar();
        ///Get & Set
        const char* getCodigo(){
            return _codigo;
        }
        void setCodigo(char *codigo){
            strcpy(_codigo, codigo);
        }

        const char *getDescripcion(){
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
        Archivo(){}

        Archivo(char *cod, char *descrip, float precio, int stock, bool estado){
            strcpy(_codigo, cod);
            strcpy(_descripcion, descrip);
            _precio=precio;
            _stock=stock;
            _estado=estado;
        }

};

void Archivo::cargar(){
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
void Archivo::mostrar(){
    cout << "Codigo     : " << _codigo << endl;
    cout << "Descripcion: " << _descripcion << endl;
    cout << "Precio     : " << _precio << endl;
    cout << "Stock      : " << _stock << endl;
    cout << "Estado     : " << _estado << endl;
}


int main(){
    float valor;

    Archivo a[10];

    for(int i=0;i<3; i++){
        a[i].cargar();
        cout << endl;
    }
    system("cls");

    cout << "Listado de Articulos" << endl;
    for(int i=0; i<3; i++){
        cout << "Articulo " << i+1 << ": " << a[i].getDescripcion() << endl;
    }
    cout << endl;
    cout << "Ingrese un valor: ";
    cin >> valor;

    for(int i=0; i<3; i++){
        if(a[i].getPrecio()>valor){
            cout << "Articulo: " << a[i].getDescripcion() << endl;
        }
    }



return 0;
}
