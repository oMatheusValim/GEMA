#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, n, w, emprestado, result=0; //quanto custa, quanto tenho e quanto quero

    cin >> k >> n >> w;
    
    for (int bananas=1; bananas <= w; bananas++){
        result += bananas*k;
    }

    emprestado = result-n;
    if (emprestado <= 0){
        cout << 0;
    } else {
        cout << emprestado;
    }
}
