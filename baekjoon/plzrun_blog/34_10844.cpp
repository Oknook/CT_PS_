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

    vector<vector<int>> v(101,vector <int>(10,0));
    for (int i = 1; i < 10; i++)
    {
        v[1][i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j-1 >= 0)
            {
                v[i][j] += v[i-1][j-1];
                v[i][j] %= 1000000000;
            }
            if (j+1 <= 9)
            {
                v[i][j] += v[i-1][j+1];
                v[i][j] %= 1000000000;
            }
        }
    }
    int answer = 0;
    for (int i = 0; i < 10; i++)
    {
        answer += v[n][i];
        answer %= 1000000000;
    }
    cout << answer;

    return 0;
}