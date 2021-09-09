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

ll func(ll n)
{
    ll ans = 0;
    for(ll i = 1; i <= n; i++){
        if(n % i == 0) {
            ans++;
        }
    }

    // ll ans = 1;
    // vector<ll> x(n + 1);
    // ll num = n; // 素因数分解する変数num 
	// for (ll i = 2; i <= n; i++) {
	// 	while (num % i == 0) { // 素数で割り切れなくなるまで割っていく
	// 		x.at(i)++;         //割った個数を配列に足す
	// 		num /= i;
	// 	}
	// }
	// for (ll i = 2; i <= n; i++)
	// {	
	// 	ans *= x.at(i) + 1;    //それぞれを+1して掛けていく
	// }
    return ans;
}

ll func2(ll a)
{
    ll ans = 1;
    for (ll i = 2; i <= sqrt(a); i++) {
        ll cnt = 0;
        while (a % i == 0) {
            cnt++;
            a /= i;
        }
        ans *= (cnt + 1);
        if (a == 1) break;
    }
    if (a != 1) ans *= 2;
    return ans;
}

int main()
{
    // Input
    ll n;
    cin >> n;

    ll ans = 0;
    REP(i, n) {
        ans += i * func2(i);
    }
    cout << ans;
    return 0;
}
