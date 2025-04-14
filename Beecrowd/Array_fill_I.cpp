#include <bits/stdc++.h>
using namespace std;

int main(){
    int V;
    cin >> V;

    vector<int> N;
    N.push_back(V);
    for(int i=1; i<10; i++){
        N.push_back(N[i-1] * 2);
    }
    for(int j=0; j< N.size(); j++){
        std::printf("N[%d] = %d\n", j, N[j]);
    }

}

