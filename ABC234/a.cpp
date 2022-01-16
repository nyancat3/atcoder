#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int fun(int x)
{
    return x * x + 2 * x + 3;
}

int main()
{
    int x;
    cin >> x;

    cout << fun(fun(fun(x) + x) + fun(fun(x))) << endl;

    return 0;
}
