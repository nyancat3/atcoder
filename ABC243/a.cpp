#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int v, a, b, c;
    cin >> v >> a >> b >> c;

    string ans;
    int rem = v % (a + b + c);
    if (rem < a) {
        ans = "F";
    } else if (rem < (a + b)) {
        ans = "M";
    } else {
        ans = "T";
    }

    cout << ans << endl;

    return 0;
}
