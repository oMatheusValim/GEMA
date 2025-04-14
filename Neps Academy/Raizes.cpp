#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    float reps, num, raiz;
    vector<float> raizes;

    cin >> reps;
    for (int i = 0; i < reps; i++){
        cin >> num;
        raiz = sqrt(num);
        raizes.push_back(raiz);
    }
    for (int j =0;  j < raizes.size(); j++){
        std::cout << std::fixed <<std::setprecision(4) << raizes[j] << endl;
    }
}