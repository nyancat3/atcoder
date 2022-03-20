#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n, m, k, s, t, x;
    cin >> n >> m >> k >> s >> t >> x;

    pair<int> edge(m);

    rep(i, m){
        cin >> edge[i].first >> edge[i].second;
    }

    cout << " " << endl;

    return 0;
}
