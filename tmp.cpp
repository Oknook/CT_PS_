#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    while (n < 10)
    {
        cout << "n1 : " << n;
        n++;
        cout << " n2 : " << n << "\n";
    }
    cout << "end : " << n;

    return 0;
}