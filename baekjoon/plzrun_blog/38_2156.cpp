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
    vector<int> v(n+1);
    vector<int> dp(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    dp[0] = 0;
    dp[1] = v[1];
    dp[2] = v[1]+v[2];

    // https://mygumi.tistory.com/98 [마이구미의 HelloWorld]
    for(int i = 3; i <= n; i++) {
        dp[i] = max(dp[i-3] + v[i] + v[i-1], dp[i-2] + v[i]);
        dp[i] = max(dp[i-1], dp[i]);
    }
    cout << dp[n];

    return 0;
}