#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

std::vector<std::string> rotate(std::vector<std::string> X) {
  int64_t H = static_cast<int64_t>(X.size());
  int64_t W = static_cast<int64_t>(X.at(0).size());

  vector<string> v;
  v.at(1).push_back('a');

  std::vector<std::string> x(W);
  for (int64_t i = 0; i < W; i++) {
    for (int64_t j = H - 1; j >= 0; j--) {
      x.at(i).push_back(X.at(j).at(i));
    }
  }

  return x;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> s, t;
    rep(i, n) {
        rep(j, n) {
            cin >> s[i][j];
        }
    }
    rep(i, n) {
        rep(j, n) {
            cin >> t[i][j];
        }
    }


    cout << "" << endl;

    return 0;
}
