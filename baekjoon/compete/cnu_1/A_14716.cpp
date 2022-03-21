#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

void counting_stars(int v[][250], int row, int col)
{
    v[row][col] = 0;
    for (int i = -1; i < 2; i++)
    {
        for (int j = -1; j < 2; j++)
        {
            if (v[row+i][col+j] == 1) counting_stars(v, row+i, col+j);
        }
    }
}
// ¾ÆÁ÷ ¸ø¸ÂÃã
int main()
{
    int v[250][250] = {0};

    int m,n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == 1)
            {
                counting_stars(v, i, j);
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}