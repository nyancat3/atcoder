#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<pair<ll, ll>> point(n);

    rep(i, n) {
        cin >> point[i].first >> point[i].second;
    }

    ll ans = 0;

    rep(p1, n) {
        if (p1 + 2 >= n) break;

        for (int p2 = p1 + 1; p2 < n; p2++) {

            for (int p3 = p2 + 1; p3 < n; p3++) {

                if (point[p1].first == point[p2].first == point[p3].first || point[p1].second == point[p2].second == point[p3].second) {
                    continue;
                }

                if (point[p1].first != point[p2].first && point[p2].first != point[p3].first && point[p1].first != point[p3].first &&
                point[p1].second != point[p2].second && point[p2].second != point[p3].second && point[p1].second != point[p3].second) {

                    double ratio = abs(point[p1].first - point[p2].first) / abs(point[p1].first - point[p3].first);
                    if (abs(point[p1].second - point[p2].second) == abs(point[p1].second - point[p3].second) * ratio) {
                        continue;
                    }

                    ratio = abs(point[p2].first - point[p1].first) / abs(point[p2].first - point[p3].first);
                    if (abs(point[p2].second - point[p1].second) == abs(point[p2].second - point[p3].second) * ratio) {
                        continue;
                    }

                    ratio = abs(point[p3].first - point[p1].first) / abs(point[p3].first - point[p1].first);
                    if (abs(point[p3].second - point[p2].second) == abs(point[p3].second - point[p3].second) * ratio) {
                        continue;
                    }
                }
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
