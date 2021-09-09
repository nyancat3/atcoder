#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int x;
    cin >> x;

    cout << ((x >= 100 && x % 100 == 0) ? "Yes" : "No") << endl;

    return 0;
}
