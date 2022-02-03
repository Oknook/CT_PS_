#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string right =  " *";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int k = 0; k < i; k++)
        {
            cout << right;
        }
        cout << "\n";
    }

    return 0;
}