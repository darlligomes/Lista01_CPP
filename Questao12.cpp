#include <iostream> 

using namespace std;

int main(){
    string usuario, senha;
    cout << "Insira o nome de usuário" << endl;
    cin >> usuario;

    cout << "Insira a senha: " << endl;
    cin >> senha;

    while(usuario == senha){
        cout << "Usuário e senha não podem ser a mesma" << endl;
        cout << "Insira uma nova senha: " << endl;

        cin >> senha;
    }
    cout << "Acesso criado!";
    return 0;

}