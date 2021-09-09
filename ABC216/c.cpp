#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    string answer = "";

    while (n > 0) {
        if (n % 2 == 1) {
            n--;
            answer += "A";
        } else {
            n /= 2;
            answer += "B";
        }
    }
    reverse(answer.begin(), answer.end());
    cout << answer << endl;

    return 0;
}
