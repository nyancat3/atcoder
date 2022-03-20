#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    vector<string> s(3), t(3);
    rep(i, 3) {
        cin >> s[i];
    }
    int match = 0;
    rep(i, 3) {
        cin >> t[i];
        if (t[i] == s[i]) match++;
    }

    string ans;
    if (match == 3) {
        ans = "Yes";
    // } else if (match == 2) {
        // no chance
    } else if (match == 1) {
        ans = "No";
    } else {
        ans = "Yes";
    }

    cout << ans << endl;

    return 0;
}
