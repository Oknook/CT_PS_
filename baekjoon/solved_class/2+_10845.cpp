#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, f = 0, b = 0;
    cin >> n;
    vector<int> v;
    string s;

    for (int i = 0; i < n+1; i++)
    {
        getline(cin, s);
        switch (s[0])
        {
        case 'p':
            if (s[1] == 'u')
            {
                string num = s.substr(s.find(' '));
                int n = stoi(num);
                v.push_back(n);
            }
            else
            {
                if (v.empty()) cout << -1 << "\n";
                else
                {
                    cout << v[0] << "\n";
                    reverse(v.begin(), v.end());
                    v.resize(v.size()-1);
                    reverse(v.begin(), v.end());
                }
            }
            break;

        case 's':
            cout << v.size() << "\n";
            break;

        case 'e':
            if (v.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
            break;

        case 'f':
            if (v.empty()) cout << -1 << "\n";
            else cout << v[0] << "\n";
            break;

        case 'b':
            if (v.empty()) cout << -1 << "\n";
            else cout << v[v.size()-1] << "\n";
            break;
        }
    }

    return 0;
}