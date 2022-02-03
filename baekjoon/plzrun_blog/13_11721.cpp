#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string n;
    getline(cin, n);
    for (int i = 0; i < n.length(); i++)
    {
        if(i % 10 == 0 && i != 0) cout << "\n";
        cout << n[i];
    }

    return 0;
}