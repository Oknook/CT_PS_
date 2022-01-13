#include <iostream>
#include <algorithm>

using namespace std;

int a[100001];

void Solution(int n, int key)
{
    int left = 0, right = n-1, mid;
    while (right >= left)
    {
        mid = (left+right)/2;
        if (a[mid] == key)
        {
            cout << "1\n";
            return;
        }
        else if (a[mid] > key) right = mid-1;
        else left = mid+1;
    }
    cout << "0\n";
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        a[i] = tmp;
    }
    sort(a, a+n);
    
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> tmp;
        Solution(n, tmp);     
    }

    return 0;
}