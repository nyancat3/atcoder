#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    ll k;
    cin >> k;

    string k_bit;
    while (k > 0) {
        k_bit.push_back('0' + (k % 2));
        k = k / 2;
    }
    reverse(k_bit.begin(), k_bit.end());

    for (auto bit: k_bit) {
        if (bit == '1') {
            cout << '2';
        } else {
            cout << '0';
        }
    }

    return 0;
}
