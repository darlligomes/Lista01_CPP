#include <iostream>
#include <vector>

using namespace std;

int main(){
    int numero[20];
    vector<int> impares, pares;

    for(int i = 0; i < 20; i++){
        cout << "Adicione um número: ";
        cin >> numero[i]; 

        if(numero[i]%2 == 0){
            pares.push_back(numero[i]);
        } else if(numero[i]%2 ==1){
            impares.push_back(numero[i]);
        }
        
    } 
    if(!(pares.empty())){
    cout << "Pares: ";
        for(int i : pares){
            cout << i << endl;
        }}

    if(!(impares.empty())){
    cout << "Impares: ";
        for(int i : impares){
            cout << i << endl;
        }}
    return 0;
}