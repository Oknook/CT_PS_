#include <iostream>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for(int j = 0; j <= i*2; j++)
        {
            if(j == 0 || j == i*2) cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    for(int i = 0; i < 2*n-1; i++)
    {
        cout << "*";
    }
    cout << "\n";

    return 0;
}