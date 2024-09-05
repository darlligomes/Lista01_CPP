#include <iostream> 

using namespace std;

int main(){
    int nota;
    cin >> nota; 

    while(nota < 0 || nota > 10){
        cout << nota << "É um número inválido, insira um numero valido, entre 0 até 10" << endl;
        cin >> nota;
    }
    cout << "Otimo! " << nota << " é um número valido";
    return 0;
}