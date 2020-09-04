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


// ASCII : a-z=97-122  ,A-Z=65-90, 0-9:48-57
void solve(){
    ll arr[20][20];
    loop(i,20){
        loop(j,20){
            cin >> arr[i][j];
        }
    }
    // int a, b, c, d;
    ll multi = 1;
    loop(i,17){
        ll temp;
        loop(j,17){
            temp = arr[i][j] * arr[i][j + 1] * arr[i][j + 2] * arr[i][j + 3];
            multi = max(multi, temp);

            temp = arr[i][j] * arr[i + 1][j + 1] * arr[i + 2][j + 2] * arr[i + 3][j + 3];
            multi = max(multi, temp);
        }
    }
    loop(j,17){
        ll temp;
        loop(i,17){
            temp = arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            multi = max(multi, temp);
        }
    }

      loopi(i,0,17){
        ll temp;
        loopi(j,3,20){
            temp = arr[i][j] * arr[i + 1][j - 1] * arr[i + 2][j - 2] * arr[i + 3][j - 3];
            multi = max(multi, temp);
        }
    }

    cout << multi; //70600674
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