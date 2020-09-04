#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 1; i < 1000;i++){
        if(i%3==0 || i%5==0){
            sum += i;
        }
    }
    cout << sum; // 233168(below 1000)
    // 23 (below 10)
}