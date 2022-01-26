#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// 217. Contains Duplicate (Array, Hash Table, Sorting)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums = {1,2,3,1};
    unordered_set<int> s(nums.begin(), nums.end());
    
    // return the if-condition to submit in leetcode
    if (s.size()==nums.size()) cout << "false";
    else cout << "true";

    return 0;
}