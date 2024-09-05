#include <iostream>

using namespace std;

int main(){
    int numero; 

    cout << "Insira um número: " << endl;
    cin >> numero; 

    if(numero >= 0){
        cout << "Número positivo!";
    } else {
        cout << "Número negativo! ";
    }

}