#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    vector<string> S(3);
    string T, ans;
    for (string& s : S) {
        cin >> s;
    }
    cin >> T;

    for (char t : T) {
        ans += S[t - '1'];
    }
    cout << ans << endl;

    return 0;
}
