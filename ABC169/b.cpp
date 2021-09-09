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
    int n;
    cin >> n;


    vector<ll> a(n);

    rep(i, n) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll ans = a[0];
    ll preAns = ans;
    for (int i = 1; i < n; i++) {
        if (ans == 0) {
            break;
        }
        ans *= a[i];

        if (ans > 1000000000000000000 || ans < preAns) {
            ans = -1;
            break;
        }
        preAns = ans;
    }


    // cin >> ans;

    // bool overs = false;

    // rep(i, n-1) {
    //     ll a;
    //     cin >> a;

    //     if (!overs) {
    //         ans *= a;

    //         if (ans > 1000000000000000000) {
    //             ans = -1;
    //             overs = true;
    //         }
    //     } else {
    //         if (a == 0) {
    //             ans *= a;
    //             overs = false;
    //         }
    //     }
    // }

    cout << fixed << ans;

    return 0;
}
