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

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // unordered_map<int, int> seen = {{3, 3}};

    // for (auto iter = seen.begin() ; iter != seen.end(); iter++)
    // {
    //     cout << iter->first << " " << iter->second << endl;
    // } cout << endl;

    // for (auto i : seen) {
    //     cout << i.first << " " << i.second << "\n";
    // }
    
    queue<int> s;
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    auto iter = a.begin()+5;
    cout << *iter;
    auto iter2 = next(iter);
    cout << *iter2 << "\n";
    cout << *iter;

    
    return 0;
}