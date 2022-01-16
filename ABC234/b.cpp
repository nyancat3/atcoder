#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> input(n);
    rep(i, n) {
        int x, y;
        cin >> x >> y;
        input[i] = make_pair(x, y);
    }

    int ans_pow = 0;
    rep(i, n - 1) {
        for (int j = i + 1; j < n ; j++) {
            int tmp = pow(input[i].first - input[j].first, 2) + pow(input[i].second - input[j].second, 2);
            if (ans_pow < tmp) {
                ans_pow = tmp;
            }
        }
    }

    cout << fixed << setprecision(10)  << sqrt(ans_pow) << endl;

    return 0;
}
