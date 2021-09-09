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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a < 0 && b == 0) {
        b = -1;
    } else if (a == 0 && b > 0) {
        a = 1;
    }
    if (c < 0 && d == 0) {
        d = -1;
    } else if (c == 0 && d > 0) {
        c = 1;
    }

    ll ans = a * c;
    if (ans < a * d) {
        ans = a * d;
    }
    if (ans < b * c) {
        ans = b * c;
    }
    if (ans < b * d) {
        ans = b * d;
    }
    cout << ans;

    return 0;
}
