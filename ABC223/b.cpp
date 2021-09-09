#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    string S;
    cin >> S;

    vector<string> ans;

    rep(i, (int)S.length()) {
        string replaced = S;

        rep(j, (int)S.length()) {
            if (j - i < 0) {
                replaced[j] = S[(int)S.length() - i + j];
            } else {
                replaced[j] = S[j - i];
            }
        }
        // cout << replaced << endl;
        ans.push_back(replaced);
    }
    sort(ans.begin(), ans.end());
    cout << ans.front() << endl;
    cout << ans.back() << endl;

    return 0;
}
