#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    string i;
    cin >> i;

    string mid = {i[1],i[2],i[0]};
    string last = {i[2],i[0],i[1]};

    cout << atoi(i.c_str()) + atoi(mid.c_str()) + atoi(last.c_str());

    return 0;
}
