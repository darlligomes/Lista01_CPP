#include <iostream> 
using namespace std;

int main(){
    float vetor[4], media;
    media = 0;

    for(int i = 0; i < 4; i++){
        cout << "Posicao " << i + 1 << ": ";
        cin >> vetor[i];
        media += vetor[i];
    }
    media /= 4;
    cout << media;
    return 0;
}