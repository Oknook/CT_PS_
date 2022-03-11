#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, answer = 0;
    cin >> n;
    stack<int> v;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 0) v.pop();
        else v.push(tmp);
    }

    int cnt = v.size();
    for (int i = 0; i < cnt; i++)
    {
        answer += v.top();
        v.pop();
    }
    cout << answer;
    
    return 0;
}