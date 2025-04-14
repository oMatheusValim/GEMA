#include <bits/stdc++.h>
using namespace std;

int main(){
    int numAcoes, acao, L1=0, L2=0;
    cin >> numAcoes;

    while (numAcoes--){
        cin >> acao;

        switch (acao){
            case 1: 
                if (L1==1){
                    L1 = 0; break;
                } else{
                    L1 = 1; break;
                }
            case 2:
                if (L2==0 && L1==0){
                    L2 = 1; L1=1; break;
                } else if (L2==1 && L1==0){
                    L2 = 0; L1=1; break;
                } else if (L1==1 && L2==0){
                    L1 = 0; L2=1; break;
                } else {
                    L1 = 0; L2=0; break;
                }
        }
    }
    cout << L1 << endl << L2;
}