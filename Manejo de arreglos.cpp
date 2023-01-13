#include <iostream>
using namespace std;
void insertar(int arreglo[], int& cantidad, int dato);
int eliminar_ultimo_elemento(int arreglo[],int& cantidad);
int eliminar_primer_elemento(int arreglo[], int& cantidad);
int eliminar_posicion(int arreglo[],int& cantidad,int posicion);
void mostrar(int arreglo[],int cantidad);
void mostrar_indices( int cantidad);
int main(){ 
    int arreglo[10];
    int dato,cantidad = 0,op=1;
    while (op != 6) {
        cout <<endl<< "1.- Insertar elemento\n2.- Eliminar ultimo elemento\n3.- Eliminar primer elemento\n4.- Eliminar posicion\n5.- Visualizar arreglo\n6.- Salir\nSeleccione : ";
        cin >> op;
        switch (op) {
            case 1:
                system("cls");
                cout << "Insertar elemento\nIngrese dato : ";
                cin >> dato;
                insertar(arreglo, cantidad, dato);
                break;
            case 2:
                system("cls");
                cout << " Eliminar ultimo elemento: ";
                cout<<"["<< eliminar_ultimo_elemento(arreglo, cantidad)<<"]\n";
                system("pause");
                break;
            case 3:
                system("cls");
                cout << " Eliminar primer elemento: ";
                cout << "[" << eliminar_primer_elemento(arreglo, cantidad) << "]\n";
                system("pause");
                break;
            case 4:
                system("cls");
                cout << " Eliminar posicion de un elemento: ";
                mostrar(arreglo, cantidad);
                mostrar_indices(cantidad);
                cout << "ingrese posicion: "; cin >> dato;
                cout << "[" << eliminar_posicion(arreglo, cantidad, dato) << "]\n";
                break;
            case 5:
                system("cls");
                mostrar(arreglo, cantidad);
                break;
        } 
    }
    return 0;
}
void insertar(int arreglo[], int& cantidad, int dato) {
    arreglo[cantidad] = dato;
    cantidad++;
}

int eliminar_ultimo_elemento(int arreglo[], int& cantidad) {
    int retorno = arreglo[cantidad-1];
    for (int i = cantidad; i < cantidad; i++)
        arreglo[i] = arreglo[i + 1];
    cantidad--;
    return retorno;
}
int eliminar_primer_elemento(int arreglo[], int& cantidad) {
    int retorno = arreglo[0];
    for (int i = 0; i < cantidad; i++)
        arreglo[i] = arreglo[i+1];
    cantidad--;
    return retorno;
}
int eliminar_posicion(int arreglo[], int& cantidad, int posicion) {
    int retorno = arreglo[posicion];
    for (int i = posicion; i < cantidad; i++)
        arreglo[i] = arreglo[i+1];
    cantidad--;
    return retorno;
}
void mostrar(int arreglo[], int cantidad) {
    cout << endl << "Arreglo"<<endl<<endl;
    for (int i = 0; i < cantidad; i++)
        cout <<"[" << arreglo[i] << "] ";
    cout << endl;
}
void mostrar_indices( int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        cout << " " << i << "  ";
    }
    cout << endl;
}