#include <bits/stdc++.h>
using namespace std;

int main() {
    int numCelulas;
    cin >> numCelulas;

    vector<int> tabuleiro;
    vector<int> pesos;

    while (numCelulas--) {
        int valor;
        cin >> valor;
        tabuleiro.push_back(valor);
    }

    for (int i = 0; i < tabuleiro.size(); i++) {
        int peso = 0;  

        if (i == tabuleiro.size() - 1) {  
            if (tabuleiro[i] == 1) peso++;
            if (i > 0 && tabuleiro[i - 1] == 1) peso++; 
        } 
        else if (i == 0) { 
            if (tabuleiro[i] == 1) peso++;
            if (tabuleiro[i + 1] == 1) peso++;
        } 
        else {  
            if (tabuleiro[i] == 1) peso++;
            if (tabuleiro[i - 1] == 1) peso++;
            if (tabuleiro[i + 1] == 1) peso++;
        }

        pesos.push_back(peso);
    }

    for (int v = 0; v < pesos.size(); v++) {
        cout << pesos[v] << endl;
    }

    return 0;
}