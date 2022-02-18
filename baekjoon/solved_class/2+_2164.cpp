#include <iostream>
#include <cmath>
#include <vector>
#include <deque>

using namespace std;

// reduce execute time to BOJ!
int main()
{
    deque<int> d;
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        d.push_back(i);
    }
    while (d.size() != 1) {
        d.pop_front();
        d.push_back(d.front());
        d.pop_front();
    }
    cout << d[0];

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