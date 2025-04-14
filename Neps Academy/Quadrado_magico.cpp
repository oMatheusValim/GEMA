#include <bits/stdc++.h>
using namespace std;

int main(){
    int valores;
    vector<int> matriz;
    
    for(int i=0; i<9; i++){
        cin >> valores;
        matriz.push_back(valores);
    }

    int quadradoMagico = 0;

    int somaInterseccoes = matriz[0] + matriz[1] + matriz[2];

    for (int i = 0; i < 9; i+=3) {
        if (matriz[i] + matriz[i+1] + matriz[i+2] == somaInterseccoes) {
            quadradoMagico++;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        if (matriz[i] + matriz[i+3] + matriz[i+6] == somaInterseccoes) {
            quadradoMagico++;
        }
    }
    

    if ((matriz[0] + matriz[4] + matriz[8] == somaInterseccoes) &&
        (matriz[2] + matriz[4] + matriz[6] == somaInterseccoes)) {
        quadradoMagico++;
    }
    
    if(quadradoMagico == 7){
        cout << "SIM";
    } else{
        cout << "NAO";
    }
}