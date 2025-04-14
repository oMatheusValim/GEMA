#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int N, valores, cont=1;
    cin >> N;

    vector<int> sequencia;
    for (int i=0; i < N; i++){
        cin >> valores;
        sequencia.push_back(valores);
    }
    
    vector<int> numSequencias;
    for (int j=1; j < N; j++){
        if (sequencia[j-1] == sequencia[j]){
            cont++;
        } else{
            numSequencias.push_back(cont);
            cont = 1;
        }
    }
    numSequencias.push_back(cont);

    int maior = numSequencias[0];
    
    for (int s=1; s < numSequencias.size(); s++){
        if(maior < numSequencias[s]){
            maior = numSequencias[s];
        }
    }
    cout << maior;
}