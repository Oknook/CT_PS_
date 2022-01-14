#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// reduce execute time to BOJ!
int main()
{
    while (1)
    {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        while (v.size() == 2)
        {
            v.erase(v.begin());
            v.push_back(v[0]);
            v.erase(v.begin());
        }
        cout << v[0] << "\n";
    }
    return 0;2
}