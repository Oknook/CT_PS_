#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<long long>> v(91,vector <long long>(2,0));
    v[1][1] = 1;
    v[2][0] = 1;
    v[3][0] = 1;
    v[3][1] = 1;

    int n;
    cin >> n;
    for (int i = 4; i <= n; i++)
    {
        v[i][0] = v[i-1][0] + v[i-1][1];
        v[i][1] = v[i-1][0];
    }
    cout << v[n][0]+v[n][1];

    return 0;
}