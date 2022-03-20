#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    string t;
    cin >> n >> t;

    int direction = 0;
    int x = 0, y = 0;

    rep(i, n){
        if (t[i] == 'S') {
            if (direction == 0) {
                x++;
            } else if (direction == 1) {
                y--;
            } else if (direction == 2) {
                x--;
            } else {
                y++;
            }
        } else {
            direction = (direction + 1) % 4;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}
