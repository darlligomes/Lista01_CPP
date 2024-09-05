#include <iostream> 
#include <algorithm>

using namespace std;

bool compararDecrescente(int a, int b) {
    return a > b;
}

int main(){
    int vetor[10] = {4, 2, 3, 9, 5, 6, 7, 8, 9, 10};
    
  
    sort(vetor, vetor + 10, compararDecrescente);
    for (int i = 0; i < 10; i++){
        cout << vetor[i] << " ";
    }
    
    return 0;
}