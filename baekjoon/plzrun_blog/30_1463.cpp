#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v(1000001);
int solve(int n)
{
    if (n == 1) return 0;
    if (v[n] != 0) return v[n];

    v[n] = solve(n-1) +1;
    if (n % 3 == 0) v[n] = min(v[n], v[n/3]+1);
    if (n % 2 == 0) v[n] = min(v[n], v[n/2]+1);

    return v[n];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << solve(n);

    return 0;
}