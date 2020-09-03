#include<bits/stdc++.h>
using namespace std;

void fibo(long long int n){
	int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i){
        if(i == 1){
            cout << t1 << " ";
            continue;
        }
        if(i == 2){
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << " ";
    }
}

void fibo2(){
	 int t1 = 0, t2 = 1, nextTerm = 0, n=4000000;

    // displays the first two terms which is always 0 and 1
    // cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
	int sum = t1 + t2;
	nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        // cout << nextTerm << ", ";
		if(nextTerm%2==0){
			sum += nextTerm;
		}
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
	cout << sum;
}


int main(){
	fibo2();
}       