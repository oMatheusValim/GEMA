#include <bits/stdc++.h>
using namespace std;

int main(){
    int tamanho, valores;
    cin >> tamanho;

    set<int> numeros;
    while(tamanho--){
        cin >> valores;
        numeros.insert(valores);
    }
    cout << numeros.size();
}