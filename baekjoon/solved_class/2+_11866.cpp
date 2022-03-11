#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<bool> b(n);
    fill_n(b.begin(), b.end(), true);

    for (int i = 1; i < n; i++)
    {
        v[i] = i;
    }
    v[0] = n;

    int cnt = n;
    vector<int> answer;
    while(n)
    {
        if(b[k])
    }

    cout << "<" << answer[0] << ", " << answer[1] << ", " << answer[2] << ", " << answer[3] << ", " << answer[4] << ", " << answer[5] << ", " << answer[6] << ">";

    return 0;
}