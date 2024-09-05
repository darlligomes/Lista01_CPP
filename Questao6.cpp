#include <iostream> 

using namespace std; 

int main(){
    int n1, n2;
    cout << "Insira o valor de n1: " ;
    cin >> n1;
    cout << "Insira o valor de n2: " ;
    cin >> n2;

    if (n1 > n2){
        cout << "n1 é o maior";
    } else if (n2 > n1){
        cout << "n2 é o maior";
    } else {
        cout << "Números iguais";
    }

}