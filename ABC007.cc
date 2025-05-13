#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s == "a")
        cout << -1 << endl;
    else if (s.size() == 1)
        cout << (char)(s[0] - 1) << endl;
    else
        cout << s.substr(0, s.size() - 1) << endl;
}