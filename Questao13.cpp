#include <iostream> 

using namespace std;

int main(){
    string nome; 
    int idade; 
    float salario; 
    char sexo, estado_civil;

    cin >> nome; 
    while(nome.size() < 3){
        cout << "Insira um nome maior que 3 caracteres" << endl;
        cin >> nome;
    }
    cout << "Nome válido!";

    while(!(idade > 0 && idade < 150)){
        cout << "Insira uma idade entre 0 e 150" << endl;
        cin >> idade;
    }
    cout << "Idade válida";
    while (salario < 0){
        cout << "Insira um salário maior que 0" << endl;
        cin >> salario;
    }
    cout << "Salário válido!";

    sexo = toupper(sexo);
    while(sexo != 'F' && sexo != 'M'){
        cout << "Insira F ou M" << endl;
        cin >> sexo;
    }
    cout << "Sexo válido";

    estado_civil = tolower(estado_civil);
    while(estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd'){
        cout << "Estado civil inválido, insira: s, c, v, d: ";
        cin >> estado_civil;
    }
    cout << "Estado civil válido!";
    return 0;
}