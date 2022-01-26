#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// reduce execute time to BOJ!
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v[i] = i+1;
    }
    if (n % 2 == 0)
    {
        cout << "1";
    }
    else
    {
        cout << "2";
    }
    
    // while (1)
    // {
    //     vector<int> v;
    //     int n;
    //     cin >> n;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         v.push_back(i);
    //     }
    //     while (v.size() == 2)
    //     {
    //         v.erase(v.begin());
    //         v.push_back(v[0]);
    //         v.erase(v.begin());
    //     }
    //     cout << v[0] << "\n";
    // }
    return 0;
}