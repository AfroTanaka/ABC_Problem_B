#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<char>> grid(4, vector<char>(4));
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            cin >> grid[i][j];
    }
    for (int i = 3; i >= 0; i--)
    {
        for (int j = 3; j >= 0; j--)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}