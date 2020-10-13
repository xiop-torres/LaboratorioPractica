#include <iostream>
#include <array>
/*
Escriba una función recursiva printArray que tome un array, un subíndice inicial
y un subíndice final como argumentos, no devuelve nada e imprime la matriz. La función
debe detener el procesamiento y regresar cuando el subíndice inicial sea igual al subíndice final.
*/
using namespace std;

const size_t arraySize{7};
//funcion con los 3 argunmentos
void printArray(const array<int , arraySize>& b ,int x ,int y){
    cout << b[x] << " " ;
    if(x==y) //si solo hay 1 elemeno
        return;
    printArray(b,x+1,y);
}

int main(){
    const array<int ,arraySize> a{12,82,25,75,36,45,87};
    cout << "Los elementos del array son: " ;
    printArray(a,0,arraySize -1);
    cout << endl;
}
