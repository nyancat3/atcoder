#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int h, w;
    cin >> h >> w;

    vector<vector<ll>> a(h, vector<ll>(w));

    rep(i, h){
        rep(j, w) {
            cin >> a[i][j];
        }
    }

    rep(i, h){
        rep(j, w) {
            for (int ii = i; ii < h; ii++) {
                for (int jj = j; jj < w; jj++) {
                    if ((a[i][j] + a[ii][jj]) > a[ii][j] + a[i][jj]) {
                        cout << "No" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}
