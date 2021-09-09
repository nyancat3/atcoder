#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int x, ans = 0;
    cin >> x;

    vector<int> scores = {40, 70, 90};
    for (int score : scores) {
        if (x < score) {
            ans = score - x;
            break;
        }
    }
    if (ans != 0) {
        cout << ans << endl;
    } else {
        cout << "expert" << endl;
    }
    return 0;
}
