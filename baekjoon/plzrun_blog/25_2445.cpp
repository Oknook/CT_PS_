#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n-1; i++)
    {
        for (int a = 0; a < i+1; a++)
        {
            cout << "*";
        }

        for (int b = 0; b < 2*(n-i-1); b++)
        {
            cout << " ";
        }

        for (int c = 0; c < i+1; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 0; i < 2*n; i++)
    {
        cout << "*";
    }
    cout << "\n";

    for (int i = 0; i < n-1; i++)
    {
        for (int a = 0; a < n-i-1; a++)
        {
            cout << "*";
        }

        for (int b = 0; b < 2*(i+1); b++)
        {
            cout << " ";
        }

        for (int c = 0; c < n-i-1; c++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}