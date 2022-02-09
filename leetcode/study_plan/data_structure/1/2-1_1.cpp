#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// 1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {       
        multiset<int> s(nums.begin(), nums.end());
        multiset<int>::iterator iter;
        multiset<int>::iterator iter2;
        for (iter = s.begin(); iter != s.end();) {
            int tmp = *iter;
            iter2 = iter;
            iter++;
            s.erase(iter2);
            if (s.find(target-tmp) != s.end()) {
                vector<int>::iterator it = find(nums.begin(), nums.end(), min(tmp, target-tmp));
                *it = INT_MAX;
                vector<int>::iterator it2 = find(nums.begin(), nums.end(), max(tmp, target-tmp));
                return {int(it-nums.begin()), int(it2-nums.begin())};
            }
        }
        return {};
        // unordered_set<int> s(nums.begin(), nums.end());
        // unordered_set<int>::iterator iter;
        // unordered_set<int>::iterator iter2;
        // for (iter = s.begin(); iter != s.end();) {
        //     iter2 = iter++;
        //     for (iter2; iter2 != s.end(); iter2++) {
        //         if (*iter + *iter2 == target) {
        //             vector<int>::iterator it = find(nums.begin(), nums.end(), *iter);
        //             vector<int>::iterator it2 = find(nums.begin(), nums.end(), *iter2);
        //             return {int(it-nums.begin()), int(it2-nums.begin())};
        //         }
        //     }
        // }
        // return {};
    }
};

int main()
{
    vector<int> v = {2,5,5,11};
    int t = 10;
    Solution sol;
    vector<int> ans = sol.twoSum(v, t);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}