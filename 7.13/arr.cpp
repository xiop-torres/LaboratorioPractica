#include <iostream>
#include <iomanip>
#include <array>
using namespace std;
main(){
    const size_t arraySize {20}; //declarando cnstatnte arraysize
    array<int,arraySize> a {0} ; //inicializando a 0 y declarando a
    int k=0;
    int duplicado;
    int valor;
    cout << "Ingrese 20 numeros entre 10 a 100 " << endl;
    for(size_t i{0};i< arraySize; i++){
        duplicado=0;
        cin >> valor; //ingresor los valores
        if(valor>=10 && valor<=100){
            for(size_t j {0};j<k ;j++){
                if(valor==a[j]){
                    duplicado=1;
                    cout<<"numero duplicado"<< endl;
                    break;
                }
            }
            if(!duplicado){
                a[k++]=valor;
            }
        }
        else
        cout << "Numero invalido"<< endl ;;
    }
    cout << "Los unicos numeros son : " << endl;
    for(size_t i{0};a[i]!=0 ;i++){
        cout << a[i] << " " ;
    }
    cout << endl;
    return 0;
}