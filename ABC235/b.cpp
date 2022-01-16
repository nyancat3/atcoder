#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    int h[n];
    cin >> h[0];
    REP(i, n-1) {
        cin >> h[i];
        if (h[i-1] >= h[i]) {
            cout << h[i-1] << endl;
            return 0;
        }
    }
    cout << h[n-1] << endl;

    return 0;
}
