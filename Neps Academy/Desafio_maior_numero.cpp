#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int numero;
    vector<int> sequencia;

    while (true){
        cin >> numero;

        if(numero == 0){
            break;
        } else {
            sequencia.push_back(numero);
        }
    }
    
    int maior;
    for (int i=0; i < sequencia.size(); i++){
        if(sequencia[i-1] < sequencia[i] && sequencia[i] > maior){
            maior = sequencia[i];
        }
    }
    cout << maior;
}