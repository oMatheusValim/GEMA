#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> vetorLinhas;
    std::vector<std::vector<int>> tabuleiro;

    while(tabuleiro.size() < n){
        int valor;
        cin >> valor;
        vetorLinhas.push_back(valor);
        if(vetorLinhas.size() == n){
            tabuleiro.push_back(vetorLinhas);
            vetorLinhas.clear();
        }
    }

    vector<int> somarLinhas;
    for(int L=0; L<n; L++){
        int somaL=0;
        for(int C=0; C<n; C++){
            somaL += tabuleiro[L][C];
        }
        somarLinhas.push_back(somaL);
    }

    vector<int> somarColunas;
    for(int C=0; C<n; C++){
        int somaC=0;
        for(int L=0; L<n; L++){
            somaC += tabuleiro[L][C];
        }
        somarColunas.push_back(somaC);
    }

    vector<int> pesosFinais;
    for(int L=0; L<n; L++){
        int pesoF=0;
        for(int C=0; C<n; C++){
            pesoF = somarLinhas[L] + somarColunas[C] - 2 * tabuleiro[L][C];
            pesosFinais.push_back(pesoF);
        }
    }

    int maior=pesosFinais[0];
    for(int i=0; i < pesosFinais.size(); i++){
        if(pesosFinais[i] > maior){
            maior = pesosFinais[i]; 
        }
    }
    cout << maior;
}