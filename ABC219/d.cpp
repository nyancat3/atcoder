#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<pair<int, int>> bento(n);
    rep(i, n) {
        cin >> bento[i].first >> bento[i].second;
    }

    const int INF = 1012345678;

    vector<vector<int>> dp(x + 1, vector<int>(y + 1, INF));
    dp[0][0] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = x; j >=0; j--) {
            for(int k = y; k >= 0; k--) {
                int karaage =
                dp[j][k] = min(dp[j][k], dp[max(j - bento[i].first, 0)][max(k - bento[i].second, 0)] + 1);
            }
        }

    }

    cout << (dp[x][y] != INF ? dp[x][y] : -1) << endl;

    return 0;
}
