#include<bits/stdc++.h>
using namespace std;

int main(){
    int chain = 0;
    int max_chain = 0;
    int number;
    for (int i = 2;i<1000000;i++){
        int n = i;
        chain = 0;
        while(n!=1){
            if(n%2==0){
                n = n / 2;
                chain++;
            }
            else{
                n = (3 * n) + 1;
                chain++;
            }
        }
        if(chain>max_chain){
            max_chain = chain;
            number = i;
            cout << max_chain << " " << number <<"\n";

        }
    }
    cout <<"finnal ans: \n";
    cout << max_chain << "\n"
         << number;
}