#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    string S, T;
    cin >> S >> T;
    if (S == T) {
        cout << "Yes";
        return 0;
    }
    string ans = "No";
    rep(i, S.size()) {
        if (S[i] != T[i]) {
            swap(S[i], S[i + 1]);
            if (S == T) {
                ans = "Yes";
            }
            swap(S[i], S[i + 1]);
        }
    }
    cout << ans << endl;

    return 0;
}
