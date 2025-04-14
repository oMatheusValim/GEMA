#include <bits/stdc++.h>
using namespace std;

int main(){
    int reps;
    cin >> reps;
    vector<int> valores;

    int cont=0;
    for(int i=0; i<reps; i++){
        int valor;
        cin >> valor;
        valores.push_back(valor);
    }

    for(int j=0; j<valores.size()-2; j++){
        if(valores[j]==1){
            if(valores[j+1] ==0 && valores[j+2]==0){
                cont++;
            }
        }
    }
    cout << cont;
}
/*
outra ideia é armazenar tudo num array e verificar cada elemento

*/