#include <iostream> 

using namespace std;
int main(){
    
    float n1, n2, media;

    cout << "Insira o valor da nota 1: " << endl;
    cin >> n1;
    cout << "Insira o valor da nota 2: " << endl;
    cin >> n2;

    media = (n1+n2)/2;
    if(media >= 7 && media < 10){
        cout << "Aprovado";
    } else if (media == 10){
        cout << "Aprovado com distincao";
    } else {
        cout << "Reprovado";
    }
    return 0;
}