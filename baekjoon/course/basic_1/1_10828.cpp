#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, tmpi;
    string tmp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (tmp == "push")
        {
            cin >> tmpi;
            v.push_back(tmpi);
        }
        else if (tmp == "pop")
        {
            if (v.empty()) cout << -1 << "\n";
            else
            {
                cout << v[v.size()-1] << "\n";
                v = {v.begin(), v.end()-1};
            }
        }
        else if (tmp == "size") cout << v.size() << "\n";
        else if (tmp == "empty")
        {
            if (v.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if (tmp == "top")
        {
            if (v.empty()) cout << -1 << "\n";
            else cout << v[v.size()-1] << "\n";            
        }
    }

    return 0;
}