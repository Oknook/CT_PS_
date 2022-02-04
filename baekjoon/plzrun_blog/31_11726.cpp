#include <iostream>
#include <vector>

using namespace std;

// 피보나치
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, answer = 1;
    cin >> n;

    vector<int> v = {0,1,2};
    for (int i = 3; i <= n; i++)
    {
        v.push_back((v[i-1]+v[i-2])%10007);
    }
    cout << v[n];

    return 0;
}