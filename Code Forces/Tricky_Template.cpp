#include <bits/stdc++.h>
using namespace std;

int main() {
    int numValidacoes;
    cin >> numValidacoes;
    
    for(int i = 0; i < numValidacoes; i++) {
        int numCaracteres;
        cin >> numCaracteres;
        
        string a, b, c;
        cin >> a >> b >> c;
        
        bool possible = false;
        for (int j = 0; j < numCaracteres; j++) {
            if (a[j] == b[j] && a[j] != c[j] || a[j] != c[j] && b[j] != c[j]) {
                possible = true;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << endl;
    }
    
    return 0;
}