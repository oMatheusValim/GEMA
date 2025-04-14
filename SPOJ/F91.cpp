#include <bits/stdc++.h>
using namespace std;

long int  f91(int n){
    if (n >= 101){
        return n-10;
    } else{
        return f91 (f91(n+11));
    }
}

int main(){
    long int n;
    
    while(true){
        cin >> n;
        if(n==0){
            return false;
        } else{
            std::printf("f91(%d) = %d\n", n, f91(n)); 
        }
    }
}