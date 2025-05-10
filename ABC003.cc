#include <bits/stdc++.h>
using namespace std;

bool check(char target)
{
    string s = "atcoder";
    for (int i = 0; i < s.size(); i++)
    {
        if (target == s[i])
            return true;
    }
    return false;
}

int main()
{
    string s, t;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
    {
        char tmp = 'A';
        if (s[i] == '@' && t[i] == '@')
            continue;
        else if (s[i] == '@')
            tmp = t[i];
        else if (t[i] == '@')
            tmp = s[i];
        else if (s[i] != t[i])
        {
            cout << "You will lose" << endl;
            return 0;
        }
        if (tmp == 'A')
            continue;
        bool res = check(tmp);
        if (res == false)
        {
            cout << "You will lose" << endl;
            return 0;
        }
    }
    cout << "You can win" << endl;
}