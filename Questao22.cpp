#include <iostream>

using namespace std;

void imprimir(int numero){
    for (int i = 0; i < (numero + 1); i++){
        for (int k = 0; k < i; k++){
            cout << i << " ";
        }
        cout << endl;
    }
}

int main(){
    int numero =0; 

    cin >> numero;

    imprimir(numero);
    return 0;
}