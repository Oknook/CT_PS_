#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());

    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    int mn = 0;
    for (auto i : m)
    {
        mn = max(mn, i.second);
    }
    vector<int> choibin;
    for (auto iter = m.begin() ; iter != m.end(); iter++)
    {
        if (iter->second == mn) choibin.push_back(iter->first);
    }

    if (sum >= 0) cout << (int)(sum/(double)n+0.5) << "\n";
    else
    {
        int tmp = (int)(sum/(double)n-0.5);
        if (tmp == -0) cout << 0;
        else cout << tmp << "\n";
    } 
    cout << v[n/2] << "\n";
    if (choibin.size() == 1) cout << choibin[0] << "\n";
    else
    {
        sort(choibin.begin(), choibin.end());
        cout << choibin[1] << "\n";
    }
    cout << v[n-1]-v[0] << "\n";
    return 0;
}