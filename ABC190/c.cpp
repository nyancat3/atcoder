#include<algorithm>//sort,二分探索,など
#include<bitset>//固定長bit集合
#include<cmath>//pow,logなど
#include<complex>//複素数
#include<deque>//両端アクセスのキュー
#include<functional>//sortのgreater
#include<iomanip>//setprecision(浮動小数点の出力の誤差)
#include<iostream>//入出力
#include<iterator>//集合演算(積集合,和集合,差集合など)
#include<map>//map(辞書)
#include<numeric>//iota(整数列の生成),gcdとlcm(c++17)
#include<queue>//キュー
#include<set>//集合
#include<stack>//スタック
#include<string>//文字列
#include<unordered_map>//イテレータあるけど順序保持しないmap
#include<unordered_set>//イテレータあるけど順序保持しないset
#include<utility>//pair
#include<vector>//可変長配列

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    // Input
    int n, m;
    cin >> n >> m;

    int a[m], b[m];
    rep(i, m) {
        cin >> a[i] >> b[i];
    }

    int k;
    cin >> k;

    int c[k], d[k];
    rep(i, k){
        cin >> c[i] >> d[i];
    }

    int ans = 0;
    rep(bit, 1<<k) {
        vector<int> dish;
        rep(i, k) {
            if (1 & (bit >> i)) {
                dish.push_back(c[i]);
            } else {
                dish.push_back(d[i]);
            }
        }
        sort(dish.begin(), dish.end());
        dish.erase(unique(dish.begin(), dish.end()), dish.end());

        int count = 0;
        rep(i, m) {
            if (find(dish.begin(), dish.end(), a[i]) != dish.end() && find(dish.begin(), dish.end(), b[i]) != dish.end()) {
                count++;
            }
        }

        if (ans < count) {
            ans = count;
        }
    }
    cout << ans << endl;

    return 0;
}
