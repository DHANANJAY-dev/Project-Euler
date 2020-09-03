#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define loop(i, end) for (int i = 0; i < end; i++)
#define loopi(i, start, end) for (int i = start; i < end; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;

bool prime(int n)
{
    if (n == 2)
        return true;
    int fact = 2;
    loopi(i, 2, sqrt(n) + 1) if (n % i == 0) return false;
    return true;
}


// ASCII : a-z=97-122  ,A-Z=65-90, 0-9:48-57
void solve(){
    long long int n = 600851475143;
    int factor = 1;
    loopi(i,2,sqrt(n)+1){
        if(n%i==0){
            if(prime(i)){
                factor = i;
            }
        }
    }
    cout << factor; //6857
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    //deb(t);

    while (t--) {
    solve();
    }
    return 0;
}