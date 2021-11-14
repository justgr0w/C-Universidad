#include <iostream>
using namespace std;
/*
Hacer un programa c++ que utilice una función que se le pase un vector y
su tamaño (el tamaño del vector lo determina el programador) como
parámetros para que se llene el vector con números enteros introducidos
por el usuario los que no pueden ser repetidos, y se debe mostrar el vector
en pantalla, también se debe mostrar un segundo vector con los números
pares que tenga el primer vector y un tercero con los números impares,
los tres vectores deben estar ordenados, se deben mostrar los tres
vectores originales y luego esos tres ordenados.
*/
int arreglo[5];
int parArray[5];
int inparArray[5];

int *rellenar_vector(int [], int s);

int *arr_inpar(int [], int [], int s);
int *arr_par(int [], int [], int s);

bool Repetido(int n, int count);
void print_arr(int [], int size);
void array_par(int [], int s);
void array_inpar(int [], int s);
void imprimir(int [], int n);
void burbuja(int [], int s);

int main(){
    
    int size = 5;
    // Rellenar vector
    int *ptr = rellenar_vector(arreglo, size);
    fflush(stdin);
    print_arr(arreglo, size);
    // Imprimir vector solamente con números pares
    array_par(arreglo, size);
    // Imprimir vector solamente con números inpares
    array_inpar(arreglo, size);
    cout<<"\n";

    // Se procede a imprimir los 3 arrays ordenadamente
    cout<<"Array original"<<endl;
    burbuja(arreglo, size);

    cout<<"Array de Pares"<<endl;
    int *ptr2 = arr_par(parArray, arreglo, size);
    burbuja(parArray, size);

    cout<<"Array de Inpares"<<endl;
    int *ptr3 = arr_inpar(inparArray, arreglo, size);
    burbuja(inparArray, size);

    cout<<"Programa finalizado..."<<endl;

    getchar();
    return 0;
}

int *rellenar_vector(int arr[], int size){
    int num;
    for(int i=0;i<size;i++){
        cout<<"Ingrese un numero: ";cin>>num;
        while(Repetido(num, i)){
            cout<<"Numero repetido\nDigite otro: ";
            cin>>num;
        }
        arr[i] = num;
    }
    return arr;
}

int *arr_par(int pararray[], int arr[], int size){
    for(int i=0; i<6;i++){
        if (arr[i] % 2 == 0){
            pararray[i] = arr[i];
        }
    }
    return pararray;
}

int *arr_inpar(int inpararray[], int arr[], int size){
    for(int i=0; i<6;i++){
        if (arr[i] % 2 != 0){
            inpararray[i] = arr[i];
        }
    }
    return inpararray;
}

bool Repetido(int num, int i){
    for (int x=0; x<i; x++)
    {
        if(num == arreglo[x]){
            return true;
        }
    }

    return false;
}

void print_arr(int arr[], int size){
    std :: cout<< "Array = [ ";
    for (int i = 0; i < size; ++i) {
        std :: cout << arr[i] << ", ";
    }
    std :: cout << "]" <<std :: endl;
}

void array_par(int arr[], int size){
    std :: cout<< "Array numeros pares = [ ";
    for (int i = 0; i < size; ++i) {
        if(arr[i] % 2 == 0){
            std :: cout << arr[i] << ", ";
        }
    }
    std :: cout << "]" <<std :: endl;
}

void array_inpar(int arr[], int size){
    std :: cout<< "Array numeros inpares = [ ";
    for (int i = 0; i < size; ++i) {
        if(arr[i] % 2 != 0){
            std :: cout << arr[i] << ", ";
        }
    }
    std :: cout << "]" <<std :: endl;
}

void imprimir(int a[], int n){
    for (int i=0;i<=n;i++){
        cout<<" "<<a[i]<<endl;
        }
}

void burbuja(int a[], int n){
    int paso =0, aux, ordenado;
    do{
        ordenado=1;
        for (int i=0;i<n-paso;i++){
            if(a[i]>a[i+1]){
                aux=a[i];
                a[i]= a[i+1];
                a[i+1]= aux;
                ordenado=0;
                }
        }
        ++paso;
        }while (!ordenado);
        cout<<"Arreglo ordenado"<<endl;
        imprimir(a, n);
}