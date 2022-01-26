#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, tmp;
    vector<int> v;
    bool start = true;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i-1]+1)
        {
            cout << "NO";
            start = false;
            break;
        }
    }
    if (start)
    {
        int current = 0, maxnum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            while (maxnum < v[i])
            {
                maxnum++;
                current = maxnum;
                cout << "+\n";
            }
            if (current == v[i])
            {
                current--;
                cout << "-\n";
            }
    }

    return 0;
}