#include <iostream>
#include <vector>

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

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        switch (s[0])
        {
        case 'p':
            if (s[1] == 'u')
            {

            }
            else
            {

            }
            break;

        case 's':
            cout << v.size();
            break;

        case 'e':
            if (v.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
            break;

        case 'f':
            break;

        case 'b':
            break;
        }
    }

    return 0;
}