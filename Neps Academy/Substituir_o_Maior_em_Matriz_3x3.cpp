#include <bits/stdc++.h>
using namespace std;

int main(){
    int valor;
    vector<int> matriz;

    while(matriz.size() < 9){
        cin >> valor;
        matriz.push_back(valor);
    }

    int i=1;
    int maior=matriz[0];
    for(i; i<matriz.size();i++){
        if(matriz[i] > maior){
            maior = matriz[i];
        }
    }
    for(int j=0; j<matriz.size(); j++){
        if(matriz[j] == maior){
            matriz[j] = -1;
        }
    }
    cout << matriz[0] << " " << matriz[1] << " " << matriz[2] << endl;
    cout << matriz[3] << " " << matriz[4] << " " << matriz[5] << endl;
    cout << matriz[6] << " " << matriz[7] << " " << matriz[8] << endl;
}