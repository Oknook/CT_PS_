#include <iostream>
#include <vector>

using namespace std;

vector<int> v = {0,1,2,4};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for (int i = 4; i <= 11; i++)
    {
        v.push_back(v[i-1]+v[i-2]+v[i-3]);
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << v[n] << "\n";
    }

    return 0;
}