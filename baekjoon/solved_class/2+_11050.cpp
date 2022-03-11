#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, answer = 1;
    cin >> n >> k;
    
    for (int i = n; i > (n-k); i--)
    {
        answer *= i;
    }
    for (int i = k; i > 1; i--)
    {
        answer /= i;
    }
    cout << answer;

    return 0;
}