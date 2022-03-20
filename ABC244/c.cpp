#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    set<int> nums;
    REP(i, 2 * n + 1) {
        nums.insert(i);
    }

    do {
        cout << *nums.begin() << endl;
        fflush(stdout);

        int aoki;
        cin >> aoki;

        if (aoki == 0) {
            break;
        }
        nums.erase(nums.begin());
        nums.erase(aoki);

    } while(1);

    return 0;
}
