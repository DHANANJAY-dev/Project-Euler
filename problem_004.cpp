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

int reverse_int(int n){
    int num, digit, rev = 0;
    num = n;
    do
    {
        digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    } while (n != 0);
    return rev;
}

bool palindrome_int(int n){
    if(n==reverse_int(n))
        return true;
    return false;
}

// ASCII : a-z=97-122  ,A-Z=65-90, 0-9:48-57
void solve(){
    int palin = 1;
    loopi(i, 100, 1000)
        loopi(j, 100, 1000) 
            if (palindrome_int(i * j)) 
                palin = max(palin, i * j);
    cout << palin; // 906609
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