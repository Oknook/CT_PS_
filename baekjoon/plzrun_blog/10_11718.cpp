#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str);

    while (str != "")
    {
        cout << str << "\n";
        getline(cin, str);
    }

    return 0;
}