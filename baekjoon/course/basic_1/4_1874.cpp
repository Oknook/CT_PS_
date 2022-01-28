#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, tmp, currentnum;
    int ptr = 0, i = 0, cnt = 0;
    vector<int> v;
    vector<int> stack;
    vector<char> ans;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }

    do
    {
        while (ptr < v[i])
        {
            stack.push_back(++ptr);
            ans.push_back('+');
        }
        currentnum = stack.back();
        if (currentnum == v[i])
        {
            stack.pop_back();
            cnt++;
            ans.push_back('-');
        }
        i++;
    } while (i < n);

    if (cnt != n) cout << "NO";
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << "\n";
        }
    }   

    return 0;
}