#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <typeinfo>
#include <stack>
#include <queue>
#include <typeinfo>

using namespace std;

int main()
{
    string s = "cbacdcbc";
    string ans = "";
        
    queue<char> q;
    for (char c : s) {
        if (q.front() > c) {
            while(!q.empty()) {
                q.pop();
            }
        }
        q.push(c);
    }

    while (!q.empty()) {
        if (ans.find(q.front()) == string::npos) ans += q.front();
        q.pop();
    }
    
    cout << ans;
}