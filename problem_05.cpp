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

int gcd(int a, int b){ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}

ll lcm_arr(int arr[], int n){ 
    ll ans = arr[0];   
    for (int i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
    return ans; 
}


// ASCII : a-z=97-122  ,A-Z=65-90, 0-9:48-57
void solve(){
    int arr[20];
    int n = 20;
    loop(i,20) arr[i] = i+1;
    cout << findlcm(arr, 20); //232792560
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    //deb(t);

    while (t--) {
    solve();
    }
    return 0;
}