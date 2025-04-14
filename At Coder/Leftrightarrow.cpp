#include <bits/stdc++.h>
using namespace std;

int main() {
    string linha;  
    getline(cin, linha);  

    int numMaior = 0, numMenor = 0, numIgual = 0;

    for (char elemento : linha) {  
        if (elemento == '<') {
            numMenor++;
        } else if (elemento == '>') {
            numMaior++;
        } else if (elemento == '=') {
            numIgual++;
        }
    }
    if ((numMaior + numMenor + numIgual) == linha.size() && numMenor==1 && numMaior==1) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}