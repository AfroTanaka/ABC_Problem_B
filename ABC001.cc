#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin >> m;
    double tmp = m / 1000.0;
    if (tmp < 0.1)
        cout << "00" << endl;
    else if (tmp > 70)
        cout << 89 << endl;
    else if (0.1 <= tmp && tmp <= 5)
        printf("%02d\n", (int)(tmp * 10));
    else if (6 <= tmp && tmp <= 30)
        printf("%02d\n", (int)(tmp + 50));
    else
        printf("%02d\n", (int)((tmp - 30) / 5 + 80));
}