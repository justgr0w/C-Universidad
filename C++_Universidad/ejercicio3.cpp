#include <iostream>
using namespace std;
/*
Hacer un programa c++ que utilice una función que se le pase un vector y
su tamaño (el tamaño del vector lo determina el programador) como
parámetros para que se llene el vector con letras introducidos por el
usuario, el usuario no puede repetir letras.
*/
char arreglo[5];
bool Repetido(char n, int count);
char *rellenar_arr(char [], int s);
void print_arr(char [], int s);

int main(void){
    int size = 5;
    // char arreglo[5];
    char *ptr = rellenar_arr(arreglo, size);
    fflush(stdin);
    print_arr(arreglo, size);

    getchar();
    return 0;
}

bool Repetido(char caracter, int i){
    for (int x=0; x<i; x++)
    {
        if(caracter == arreglo[x]){
            return true;
        }
    }

    return false;
}

char *rellenar_arr(char arr[], int size){
    char caracter;
    for(int i=0;i<size;i++){
        cout<<"Ingrese una letra: ";cin>>caracter;
        while(Repetido(caracter, i)){
            cout<<"Caracter repetido\nDigite otro: ";
            cin>>caracter;
        }
        arr[i] = caracter;
    }
    return arr;
}

void print_arr(char arr[], int size){
    std :: cout<< "Array de caracteres = [ ";
    for (int i = 0; i < size; ++i) {
        std :: cout << arr[i] << ", ";
    }
    std :: cout << "]" <<std :: endl;
}