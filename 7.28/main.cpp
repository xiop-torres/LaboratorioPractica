#include <iostream>
#include <string>
using namespace std;
bool testPalindrome(string oracion1){
    if (oracion1.size()<2)
        return true;
    size_t oracion2{oracion1.size()-1}; //revisa si el tmñ de la 1 oracion es menos q 2 
    if(oracion1[0]<97|| oracion1[0]>122)
        return testPalindrome(oracion1.substr(1,oracion2));
    if(oracion1[oracion2]<97|| oracion1[oracion2]>122)
        return testPalindrome(oracion1.substr(0,oracion2));
    if(oracion1[0]==oracion1[oracion2])
        return testPalindrome(oracion1.substr(1,oracion2 -1 ));
    return false;
}

int main(){
    string sentence {"anita lava la tina"};
    string sentence_2 {"hola hola hola"};
    cout << "La oracion es " ;
    cout << sentence << endl;
    cout << sentence_2 << endl;
    if(testPalindrome(sentence_2))
        cout << "Es palindrome"<<endl;
    else
    {
        cout << "No es palindrome!" << endl;
    }
    return 0;
    
}
