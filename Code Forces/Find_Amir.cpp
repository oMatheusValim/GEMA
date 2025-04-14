#include <bits/stdc++.h>
using namespace std;

int main(){
    int numEscolas;
    cin >> numEscolas;

    if(numEscolas%2==0){
        cout << numEscolas/2 - 1;
    } else{
        cout << (numEscolas-1) / 2;
    }
}