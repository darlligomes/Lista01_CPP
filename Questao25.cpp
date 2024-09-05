#include <iostream> 
using namespace std;

float somaImposto(float custo, float taxaImposto){
    return custo * (1+(taxaImposto / 100.00));
}

int main(){
    float custo, taxaImposto;
    cout << "Insira o valor do produto: ";
    cin >> custo;

    cout << "Insira o valor do imposto em %: ";
    cin >> taxaImposto;
    cout << "O valor fica: " << somaImposto(custo, taxaImposto);

    return 0;
}