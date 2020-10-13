#include <iostream>
using namespace std;
int main(){
    char arr[] ={'x','i','o','m','r','a','\0'};
    /*
    for(int i=0;arr[i]!='\0';i++){
        cout << arr[i];
    }
    int i=0;
    while(arr[i]!='\0'){
        cout << arr[i];
        i++; 
    
    for(int i=0;i<sizeof(arr);i++){
        cout<< arr[i]<<endl;
    }*/
    // arreglo de enteros del 1 al 10 e imprimir
    int num[]={1,2,3,4,5,6,7,8,9,10};
    int size =sizeof(num)/sizeof(num[0]);

    for (int i=0;i<size;i++){
        cout << num[i]<< endl;
    }
    cout << endl ;
    //invertir los elementos del arreglo
    int temp;
    for(int i=0;i<size/2;i++){
        temp=num[i];
        num[i]=num[size-i-1];
        num[size-i-1]=temp;
    }
    for(int i=0 ;i<size ;i++){
        cout << num[i]<< " " << endl;
    }
    cout << endl ;
    

}