#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int a, b = 0;
    ll ans = 1;
    cin >> a >> b;
    if (a != b) {
        rep(i, a - b) {
            ans *= 32;
        }
    }
    cout << ans << endl;
    return 0;
}
