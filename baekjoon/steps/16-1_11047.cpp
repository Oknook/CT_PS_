#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, cnt = 0;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = n-1; i >= 0; i--)
    {
        int tmp;
        cin >> tmp;
        v[i] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        if (k == 0) break;
        if (k/v[i] != 0)
        {
            cnt += int(k/v[i]);
            k -= int(k/v[i])*v[i];
        }
    }
    cout << cnt;

    return 0;
}