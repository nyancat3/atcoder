#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> vec = {"ABC", "ARC", "AGC", "AHC"};

    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        auto itr = find(vec.begin(), vec.end(), s);
        vec.erase(itr);
    }
    cout << vec.at(0);

    return 0;
}
