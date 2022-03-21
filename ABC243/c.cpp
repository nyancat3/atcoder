#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> xys(n);
    rep(i, n) {
        cin >> xys[i].first >> xys[i].second;
    }
    string s;
    cin >> s;

    unordered_map<int, int> ltor_x(n);
    unordered_map<int, int> rtol_x(n);
    string ans = "No";
    rep(i, n) {
        int x = xys[i].first;
        int y = xys[i].second;
        if (s[i] == 'R') {
            if (ltor_x.count(y) > 0) {
                if (x < ltor_x[y]) {
                    ltor_x[y] = x;
                }
            } else {
                ltor_x[y] = x;
            }
        } else { // 'L'
            if (rtol_x.count(y) > 0) {
                if (x > rtol_x[y]) {
                    rtol_x[y] = x;
                }
            } else {
                rtol_x[y] = x;
            }
        }
        if (ltor_x.count(y) > 0 && rtol_x.count(y) > 0 && ltor_x[y] < rtol_x[y]) {
            ans = "Yes";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
