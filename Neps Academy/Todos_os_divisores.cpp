#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int X;
    cin >> X;

    vector<int> divisores;
    for (int i=1; i <= X; i++){
        if(X%i==0){
            divisores.push_back(i);
        }
    }
    for (int d=0; d<divisores.size(); d++){
        cout << divisores[d] << " ";
    }
}