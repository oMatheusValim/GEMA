#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, valor;
    cin >> N;
    vector<int> X;

    while(X.size() < N){
        cin >> valor;
        X.push_back(valor);
    }

    int menor=X[0], posicao=0;
    for (int i=1; i < X.size() ; i++){
        if(X[i] < X[i-1] && X[i] < menor){
            menor = X[i];
            posicao=i;
        }
        
    }
    std::printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    
}