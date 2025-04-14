#include <bits/stdc++.h>
using namespace std;

void Hanoi(int n, int &movs){
    movs = pow(2, n) -1;
}


int main(){
    int numDiscos;
    int vezes=0;

    while(true){
        cin >> numDiscos;

        if(numDiscos == 0){
            break;
        }
        int movs=0;
        vezes++;

        Hanoi(numDiscos, movs);

        if(vezes > 1){
            cout << "\n";
        }
        cout << "Teste " << vezes << "\n" << movs << "\n";
    }
    return 0;
}