#include <iostream> 
using namespace std;

int soma(int n1, int n2, int n3){
    return n1 + n2 + n3;
}

int main(){
    int n1, n2, n3;

    cout << "Soma n1: ";
    cin >> n1;
    cout << "Soma n2: ";
    cin >> n2; 
    cout << "Soma n3: "; 
    cin >> n3;
    cout << "Resultado é: " << soma(n1, n2, n3);
    return 0;
}