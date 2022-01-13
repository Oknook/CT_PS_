#include <iostream>

using namespace std;

int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0) break;

        int m = n, comp = 0;
        while (m != 0)
        {
            comp = 10*comp + m%10;
            m /= 10;
        }
        if (n == comp) cout << "yes\n";
        else cout << "no\n";
    }

    return 0;
}