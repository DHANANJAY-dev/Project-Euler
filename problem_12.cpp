#include<bits/stdc++.h>
using namespace std;

int factor(long long int x){
    int fact = 0;
    for (long long int i = 1; i <= sqrt(x)+1;i++){
        if(x%i==0){
            fact+=2;
        }
    }
    return fact;
}

int main(){
    long long x = 1;
    for (int y = 2; y < 1000000;y++){
        x += y;
        if(factor(x)>500){
            cout << x;
            break;
        }
    }
}