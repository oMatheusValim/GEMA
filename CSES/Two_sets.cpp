#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int nElem;
    cin >> nElem;
    
    int somatorio=0;
    somatorio = nElem * (nElem+1) / 2;

    if(somatorio%2 != 0){
        cout << "NO" << endl;
    } else{
        cout << "SIM" << endl;
        
        vector<int> conjunto1, conjunto2;
        int alvo = somatorio/2;

        for(int i=nElem; i >=1; i--){
            if(alvo >= i){
                conjunto1.push_back(i);
                alvo -= i;
            } else {
                conjunto2.push_back(i);
            }
        }
        cout << conjunto1.size() << endl;
        for(int c1 : conjunto1) cout << c1 << " ";
        cout << endl;

        cout << conjunto2.size() << endl;
        for(int c2 : conjunto2) cout << c2 << " ";
        cout << endl;

    }
    
}