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
#include<string.h>
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
    int h, w, k;
    cin >> h >> w >> k;

    int ans = 0;
    bool cIsBlack[h][w];
    // vector<vector<bool>> cIsBlack(h, vector<bool>(w, false));

    rep(i, h) {
        string s;
        cin >> s;

        rep(j, w) {
            if (s[j] == '#') {
                cIsBlack[i][j] = true;
            } else {
                cIsBlack[i][j] = false;
            }
        }
    }

    // rep(i, h) {
    //     rep(j, w) {
    //         cout << cIsBlack[i][j] << " ";
    //     }
    //     cout << endl;
    // }



    for (int iBit = 0; iBit < (1 << h); ++iBit) {   // 0 to 2^h - 1

        for (int jBit = 0; jBit < (1 << w); ++jBit) {   // 0 to 2^w -1

            bool tmpCIsBlack[h][w];
            memcpy(tmpCIsBlack, cIsBlack, sizeof(cIsBlack));
            // vector<vector<bool>> tmpCIsBlack(h, vector<bool>(w, false));
            // tmpCIsBlack = cIsBlack;

            rep(i, h) {
                if (iBit & (1 << i)) {
                    // i行をfalseに塗りつぶす
                    rep(j, w) {
                        tmpCIsBlack[i][j] = false;
                    }
                }
            }


            rep(j, w) {
                if (jBit & (1 << j)) {
                    // j列をfalseに塗りつぶす
                    rep(i, h) {
                        tmpCIsBlack[i][j] = false;
                    }
                }
            }


            // judge
            int count = 0;
            rep(i, h) {
                rep(j, w) {
                    if (tmpCIsBlack[i][j] == true){
                        count++;
                    }
                }
            }
            // cout << "count: " << count << endl;
            if (count == k) {
                ans++;
            }


        }
    }
    cout << ans;

    return 0;
}
