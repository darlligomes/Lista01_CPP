#include <iostream> 

using namespace std;

char tipo(int n1){
    if(n1 > 0){
        return 'P';
    } else{
        return 'N';
    }
}

int main(){
    int n1;

    cin >> n1;
    cout << tipo(n1);
    return 0;
}