#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, tmp, tmpp;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str;
        cin >> str;
        while (1)
        {
            tmp = str.find("(");
            if (tmp == string::npos) break;

            tmpp = str.find(")", tmp+1);
            if (tmpp == string::npos) break;

            str.replace(tmp, 1, "x");
            str.replace(tmpp, 1, "x");
        }
        if (str.find("(") != string::npos || str.find(")") != string::npos) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;
}