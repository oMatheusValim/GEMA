#include <bits/stdc++.h>
using namespace std;

int main(){
    int Ia, Ib, Fa, Fb, apertos = 0;

    cin >> Ia >> Ib >> Fa >> Fb;

    if (Fb != Ib){
        if (Ia == 0){
            Ia = 1;
        } else{
            Ia = 0;
        }

        if (Ib == 0){
            Ib = 1;
        } else{
            Ib = 0;
        }
        apertos++;
    }

    if (Ia != Fa){
        if (Ia == 0){
            Ia = 1;
        } else{
            Ia = 0;
        }
        apertos++;
    }
    cout << apertos;
}