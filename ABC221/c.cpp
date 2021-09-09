#include <bits/stdc++.h>

#define rep(i,n) for (int i = 0; i < n; i++)
#define REP(i,n) for(int i=1;i<=n;i++)

using namespace std;
typedef long long ll;

int main()
{
    string N;
    cin >> N;

    map<char, char> dict;
    rep(i, 26) {
        dict.insert(make_pair(x[i], 'a' + i));
    }

    for

    map<string, string> ans;
    rep(i, n){
        string name;
        cin >> name;

        string key = "";
        rep(j, (int)name.length()){
            key += dict.at(name[j]);
        }
        ans.insert(make_pair(key, name));
    }

    for (pair<string, string> a : ans) {
        cout << a.second << endl;
    }
    return 0;
}
