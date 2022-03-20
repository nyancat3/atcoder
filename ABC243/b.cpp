#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    ll ans_match = 0;
    ll ans_pair = 0;

    vector<ll> a(n), b(n);
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n){
        cin >> b[i];
        if (a[i] == b[i]) {
            ans_match++;
        } else {
            ans_pair += count(a.begin(), a.end(), b[i]);
        }
    }

    cout << ans_match << endl << ans_pair << endl;

    return 0;
}
