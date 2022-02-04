#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> v(1001,vector <int>(10,0));
    for (int i = 0; i < 10; i++)
    {
        v[1][i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = j; k < 10; k++)
            {
                v[i][j] += v[i-1][k];
                v[i][j] %= 10007;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        ans += v[n][i];
        ans %= 10007;
    }
    cout << ans;

    return 0;
}