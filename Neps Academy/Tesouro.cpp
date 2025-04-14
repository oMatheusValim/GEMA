#include <bits/stdc++.h>
using namespace std;

int main(){
    int movs, x, y;
    cin >> movs >> x >> y;

    char coord;
    for (int i=0; i < movs; i++){
        cin >> coord;

        switch (coord){
            case 'C': x--; break;
            case 'B': x++; break;
            case 'D': y++; break;
            case 'E': y--; break;
            default: break;
        }
        
    }
    cout << x << " " << y;
}