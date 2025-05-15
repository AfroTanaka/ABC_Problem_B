#include <bits/stdc++.h>
using namespace std; 

int main()
{
    int n;
    cin >> n;

    map<string, int> name_count;

    for (int i = 0; i < n; i++)
    {
        string name;
        cin >> name;
        name_count[name]++;
    }
    string most_freq_name;
    int max_count = 0;
    for (const auto& pair : name_count)
    {
        if (pair.second > max_count)
        {
            max_count = pair.second;
            most_freq_name = pair.first;
        }
    }
    cout << most_freq_name << endl;
}