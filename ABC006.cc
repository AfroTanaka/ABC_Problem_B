#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> ar(1000001);
    ar[0] = 0;
    ar[1] = 0;
    ar[2] = 0;
    ar[3] = 1;
    for (int i = 4; i <= n; i++)
    {
        ar[i] = (ar[i - 1] + ar[i - 2] + ar[i - 3]) % 10007;
    }
    cout << ar[n] << endl;
    //cout << ar[n] % 10007 << endl;
}