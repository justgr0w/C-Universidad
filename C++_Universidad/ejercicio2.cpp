#include <iostream>
using std::cout;
using std::cin;
using std::endl;
/*
Hacer un programa c++ que utilice una función que se le pase un vector y
su tamaño (el tamaño del vector lo determina el programador) como
parámetros para que se llene el vector con números reales introducidos
por el usuario, y se debe mostrar el vector en pantalla, también se debe
mostrar el promedio de los números, decir cuál es el mayor y cual el menor
de los números, se debe contar cuantos 1 se repiten en el arreglo.
*/

double *arr(double [], int s);
void promedio_max_min(double [], int s);
void find_numOne(double [], int s);

int main(){
    int size = 10;
    double arreglo[10];
    double *ptr = arr(arreglo, size);
    promedio_max_min(arreglo, size);
    find_numOne(arreglo, size);
    
    getchar();
}

double *arr(double arr[], int size){
	
    for(int i=0;i<size;i++){
        cout<<"ingrese un valor: ";cin>>arr[i];
    }
    fflush(stdin);
    
    // Print
    cout<< "array = [ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << ", ";
    }
    cout << "]" << endl;
    
    return arr;
}

void promedio_max_min(double arr[], int size){
    // Sacar Promedio, menor, mayor
    double promedio=0, total=0;
    double mayor, menor; mayor = menor = arr[0];
    
    for(int i=0; i<size; i++){
        total+=arr[i];
        if (arr[i] > mayor) mayor = arr[i];
		if (arr[i] < menor) menor = arr[i];
    }
    cout<<"El mayor es: "<<mayor<<endl;
    cout<<"El menor es: "<<menor<<endl;
    promedio = total/size;
    cout<<"El promedio es: "<<promedio<<endl;
}

void find_numOne(double arr[], int size){
    int count = 0;
    for (int i=0;i<size;i++){
        if (arr[i] == 1){
                count+=1;
        }
    }

    cout<<"Hay "<<count<<" Unos(1) en este arreglo."<<endl;
}
