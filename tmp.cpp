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

    string str;
    getline(cin, str);

    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string tmp;
        getline(cin, tmp);
        cout << tmp +"!\n";
    }
    

    return 0;
}