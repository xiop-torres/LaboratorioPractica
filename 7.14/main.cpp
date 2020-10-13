//reimplenta el ant ejercicio usando un vector , comenzar con un vecto 
//con un vector vacioy usar push_back funcion para agregar 
//unico valor al vector
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
main(){
    const size_t arraySize=20; //declarando cnstatnte arraysize
    vector<int> v;
    size_t s=0;
    bool duplicado=false;
    int i=0;
    int valor;
    cout << "Ingrese 20 numeros entre 10 a 100 " << endl;
    while(i< arraySize){
        duplicado=false;
        cin>>valor;
        if(valor>=10 && valor<=100){
            for(int j=0 ; j<v.size();++j){
                if(valor==v[j]){
                    duplicado=true;
                    break;
                }
            }
            if(!duplicado){
                v.push_back(valor); // empuja el numero en vecto si no es duplicado
                ++s;
            }
            else{
                cout << "numero duplicado" << endl;
                ++i;
            }
        }
        else
        {
            cout << "Numero invalido" << endl;
            
        }
        
    }
    cout << "Los unicos numeros son : " << endl;
    for(size_t index=0 ;v[index]!=0;++index){
        cout << v[index]<< ' ' ;
    }
    cout << endl;
}