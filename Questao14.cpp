#include <iostream>
using namespace std;

int main() {
    float paisA = 80000, paisB = 200000;
    int ano = 0;
    
    while (paisA <= paisB) {
        paisA *= (1 + 0.03);  
        paisB *= (1 + 0.015); 
        ano++;
    }

    cout << "Demorou " << ano << " anos" << endl;

    return 0;
}
