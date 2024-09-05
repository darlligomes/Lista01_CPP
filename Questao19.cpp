#include <iostream> 
#include <vector>

using namespace std;

int main(){
    char vetor[10];
    vector<char> consoantes;
    int vogal, qtdconsoante;
    vogal = 0; 
    qtdconsoante =0;

    cout << "Insira 10 letras";
    for(int i = 0; i < 10; i++){
        cin >> vetor[i];
        if (vetor[i] == 'A' || vetor[i] == 'E' || vetor[i] == 'I' || vetor[i] == 'O' || vetor[i] == 'U'){
        vogal += 1; 
        } else{
            qtdconsoante += 1;
            consoantes.push_back(vetor[i]);
        }
    }
    cout << "Quantidade de vogais: " << vogal << endl;
    cout << "Quantidade de consoantes: " << qtdconsoante << endl;
    cout << "Consoantes: ";
    for(char c : consoantes) {
        cout << c << " ";
    }


    return 0;
}