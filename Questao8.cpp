#include <iostream> 


using namespace std; 

int main(){
    char letra; 

    cout << "Insira F ou M" << endl;
    cin >> letra;

    letra = toupper(letra);

    if(letra == 'F'){
        cout << "F - Feminino";
    } else if(letra == 'M'){ 
        cout << "M - Masculino";
    } else {
        cout << "Sexo inválido";
    }
}