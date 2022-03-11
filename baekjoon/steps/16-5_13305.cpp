#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, wholedis = 0;
    cin >> n;
    vector<int> dis(n-1);
    vector<int> oil(n);
    vector<int> cpy(n);

    for (int i = 0; i < n-1; i++)
    {
        cin >> dis[i];
        wholedis += dis[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> oil[i];
        cpy[i] = oil[i];
    }
    sort(cpy.begin(), cpy.end()-1);

    int left, right = dis.size(), idx = 0, answer = 0;
    while(wholedis > 0)
    {
        int curdis = 0;
        left = find(oil.begin(), oil.end(), cpy[idx])-oil.begin();
        for(int i = left; i < right; i++)
        {
            curdis += dis[i];
        }
        answer += curdis*cpy[idx];
        wholedis -= curdis;
        curdis = 0;
        idx++;
        right = left;
    }
    cout << answer;

    return 0;
}