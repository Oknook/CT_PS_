#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v = {{10}, {1}, {2,4,8,6}, {3,9,7,1}, {4,6}, {5}, {6}, {7,9,3,1}, {8,4,2,6}, {9,1}};
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        a %= 10;
        b -= 1;
        b %= v[a].size();
        cout << v[a][b] << "\n";
    }
    
    return 0;
}