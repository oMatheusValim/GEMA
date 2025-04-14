#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int divisoes(int n, int k){
    if(n<=k){
        return 1;
    }
 
    int a = std::floor(n/2.0);
    int b = std::ceil(n/2.0);
    return divisoes(a, k) + divisoes(b, k);
} 

int main(){
    int nReais, Kpartes;

    while(true){
        cin >> nReais >> Kpartes;
        if(nReais==0 && Kpartes==0){
            return false;
        }
        cout << divisoes(nReais, Kpartes);
    }

    return 0;
}