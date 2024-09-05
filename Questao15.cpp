#include <iostream>
using namespace std;

int main() {
    float paisA, paisB;
    int ano = 0;
    
    cout << "Insira a populacao de pais A: " << endl;
    cin >> paisA;
    cout << "Insira a populacao de pais B: " << endl;
    cin >> paisB;

    float crescimento_A, crescimento_B;
    cout << "Insira o crescimento de pais A (em %): " << endl;
    cin >> crescimento_A;
    if(crescimento_A < 1){
            cin >> crescimento_A;
        }
        cout << "Insira o crescimento de pais B (em %): " << endl;
        cin >> crescimento_B;

    if(crescimento_B < 1){
            cin >> crescimento_B;
        }    cin >> crescimento_B;

    crescimento_A /= 100.0;
    crescimento_B /= 100.0;

    while (paisA <= paisB) {
        paisA *= (1 + crescimento_A);
        paisB *= (1 + crescimento_B);
        ano++;
    }

    cout << "Demorou " << ano << " anos" << endl;
    while(paisA != 0 || paisB != 0){
        cout << "Insira a populacao de pais A: " << endl;
        cin >> paisA;
        cout << "Insira a populacao de pais B: " << endl;
        cin >> paisB;

        float crescimento_A, crescimento_B;
        cout << "Insira o crescimento de pais A (em %): " << endl;
        
        cin >> crescimento_A;
        if(crescimento_A < 1){
            cin >> crescimento_A;
        }
        cout << "Insira o crescimento de pais B (em %): " << endl;
        cin >> crescimento_B;

         if(crescimento_B < 1){
            cin >> crescimento_B;
        }

        crescimento_A /= 100.0;
        crescimento_B /= 100.0;

        while (paisA <= paisB) {
            paisA *= (1 + crescimento_A);
            paisB *= (1 + crescimento_B);
            ano++;
        }

        cout << "Demorou " << ano << " anos" << endl;
    }
    return 0;
}
