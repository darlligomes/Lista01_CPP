#include <iostream> 

using namespace std;

int main(){
    char letra; 
    cout << "Insira a letra: " << endl;
    cin >> letra;
    letra = toupper(letra); 

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == '0' || letra == 'U'){
        cout << "Letra eh uma vogal";
    } else {
        cout << "Letra eh uma consoante";
    }

}