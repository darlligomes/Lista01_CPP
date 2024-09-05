#include <iostream> 

using namespace std; 

int main(){
    int n[4];
    float media = 0;

    for(int i = 0; i < 4; i++){
        cout << "Insira o valor de nota " << i+1 << endl;
        cin >> n[i];
    }

    for(int k = 0; k < 4; k++){
        media += n[k];
    }
    cout << "Media igual a " << media /4;
}