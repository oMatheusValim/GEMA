#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

int main(){
    int num;
    cin >> num;

    vector<float> pontos;
    float x, y;
    while (pontos.size() < num){
        cin >> x >> y;
        pontos.push_back(x);
        pontos.push_back(y);
    }
    
    float formula = (num/2) - 2;
    cout << formula; 
}