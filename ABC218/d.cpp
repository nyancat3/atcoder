#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    int answer = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i].first < v[j].first && v[i].second < v[j].second) {
                bool exists_left_upper = binary_search(v.begin(), v.end(), make_pair(v[i].first, v[j].second));
                bool exists_right_lower = binary_search(v.begin(), v.end(), make_pair(v[j].first, v[i].second));
                if (exists_left_upper && exists_right_lower) {
                    answer++;
                }
            }
        }
    }

    cout << answer << endl;

    return 0;
}
