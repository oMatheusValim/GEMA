#include <bits/stdc++.h>
using namespace std;

int main(){
    long int numero;
    cin >> numero;

    cout << numero << " ";
    while (numero > 1){
        if (numero%2==0){
            numero = numero/2;
        } else {
            numero = (numero*3)+1;
        }
        cout << numero << " ";
    }
}