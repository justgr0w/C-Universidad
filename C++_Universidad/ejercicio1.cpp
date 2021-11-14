#include <iostream>
/*
Hacer un programa c++ que llene un arreglo con números enteros, el
programador coloca el tamaño del vector, una vez lleno lo debe mostrar
en pantalla, luego lo debe pasar a una función donde esta pida nuevos
valores al usuario y los reemplace por los anteriores y al final debe retornar
el vector modificado a quien llamo a la función para que se muestre en
pantalla.
*/
void imprimir_array(int [], int size);
int *modificar_array(int [], int size);

int main(){
    constexpr int size = 8;
    int array[8];
    imprimir_array(array, size);
    int *ptr = modificar_array(array, size);
    fflush(stdin);

    std :: cout<<"Arreglo modificado:"<<std :: endl;
    std :: cout<< "array = [ ";
    for (int i = 0; i < size; ++i) {
        std :: cout << ptr[i] << ", ";
    }
    std :: cout << "]" <<std :: endl;

    getchar();
    return 0;
}

void imprimir_array(int arreglo[], int size){
    std :: cout<<"Elementos del vector: "<<std :: endl;
    for (int i=0; i < size; i++){
        std :: cout<<"indice: "<<i<<": "<<arreglo[i]<<std :: endl;
    }
}

int *modificar_array(int arreglo[], int size){
    std :: cout<<"__Modificar arreglo__"<<std :: endl;
    for (int i=0; i < size; i++){
        std :: cout<<"Indice: "<<i<<" nuevo valor a ingresar: ";std :: cin>>arreglo[i];
    }
    return arreglo;
}