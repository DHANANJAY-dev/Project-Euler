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

int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i = 0; i < res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry)
    {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}
void factorial_large(int n)
{
    int res[500];

    res[0] = 1;
    int res_size = 1;

    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);
    int sum = 0;
    for (int i = res_size - 1; i >= 0; i--)
        sum+= res[i];
    cout << sum;
}

// ASCII : a-z=97-122  ,A-Z=65-90, 0-9:48-57
void solve(){
    factorial_large(100);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    //deb(t);

    while (t--)
    {
        solve();
    }
    return 0;
}