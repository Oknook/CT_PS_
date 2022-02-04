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

    vector<int> v = {0,1};
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0) v.push_back((v[i-1]*2+1)%10007);
        else v.push_back((v[i-1]*2-1)%10007);
    }
    cout << v[n];

    return 0;
}