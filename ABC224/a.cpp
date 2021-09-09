#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin >> s;

    if (s.substr(s.length()-2, 2) == "er") {
        cout << "er";
    } else {
        cout << "ist";
    }

    return 0;
}
