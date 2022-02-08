#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(2, vector<int>(n+1));
        for (int j = 0; j < 2; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                cin >> v[j][k];
            }
        }
        if (n == 1) cout << max(v[0][1], v[1][1]) << "\n";
        else if (n == 2) cout << max(v[0][1]+v[1][2], v[1][1]+v[0][2]) << "\n";
        else
        {
            for (int j = 2; j <= n; j++)
            {
                v[0][j] += max(v[1][j-1], v[1][j-2]);
                v[1][j] += max(v[0][j-1], v[0][j-2]);
            }
            cout << max(v[0][n], v[1][n]) << "\n";
        }
        vector<vector<int>>().swap(v);
    }

    return 0;
}