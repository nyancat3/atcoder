#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans(n);

    for (int i = 1; i <= n; i++) {
        int pos;
        cin >> pos;
        ans[pos - 1] = i;
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
