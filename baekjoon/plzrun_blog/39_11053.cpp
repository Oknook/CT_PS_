#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, mx;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    fill_n(ans.begin(), n, 1);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (v[i] > v[j])
            {
                int tmp = max(ans[i], ans[j]+1);
                ans[i] = tmp;
                mx = tmp>mx?tmp:mx;
            }
        }
    }
    cout << mx;

    return 0;
}