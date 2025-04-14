#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main(){
    int reps, a, b, c;
    cin >> reps;

    vector<string> lista;
    while (lista.size() < reps){
        cin >> a >> b >> c;

        if (a + b == c){
            lista.push_back("+");
        } else {
            lista.push_back("-");
        }
    }

    for(int i = 0; i<=reps-1; i++){
        cout << lista[i] << endl;
    }
    return 0;
}