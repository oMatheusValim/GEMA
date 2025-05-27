#include <bits/stdc++.h>
using namespace std;

int fibonacci(int num){
    if(num == 0 || num ==1){
        return 1;
    }
    return fibonacci(num -1) + fibonacci(num-2);
}

int main(){
    int num;
    cin >> num;
    cout << fibonacci(num);
}