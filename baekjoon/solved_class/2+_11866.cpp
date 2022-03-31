#include <iostream>
#include <queue>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin >> n >> k;
    queue<int> q;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    for (int j = 1; j < k; j++) {
        int tmp = q.front();
        q.push(tmp);
        q.pop();
    }
    
    vector<int> v;
    while (v.size() != n) {
        v.push_back(q.front());
        q.pop();
        for (int a = 1; a < k; a++) {
            q.push(q.front());
            q.pop();
        }
    }
    
    string answer = "<";
    for (auto i : v) {
        answer += to_string(i);
        answer += ", ";
    }
    answer.erase(answer.end()-2, answer.end());
    answer += ">";
    cout << answer;
    
    return 0;
}