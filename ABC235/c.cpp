#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n, q;
    cin >> n >> q;

    map<int, vector<int>> a_map;
    REP(i, n){
        int input;
        cin >> input;
        a_map[input].push_back(i);
    }

    vector<int> ans(q);
    rep(i, q){
        int x, k;
        cin >> x >> k;

        if (a_map[x].size() >= k) {
            ans[i] = a_map[x][k - 1];
        } else {
            ans[i] = -1;
        }
    }

    for(auto element: ans) {
        cout << element << endl;
    }

    return 0;
}
