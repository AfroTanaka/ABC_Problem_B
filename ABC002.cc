#include <bits/stdc++.h>
using namespace std;

int main()
{
    string w;
    cin >> w;
    for (int i = 0; i < w.size(); i++)
    {
        if (w[i] == 'a' || w[i] == 'i' || w[i] == 'u' || w[i] == 'e' || w[i] == 'o')
            continue;
        else
            cout << w[i];
    }
    cout << endl;
}