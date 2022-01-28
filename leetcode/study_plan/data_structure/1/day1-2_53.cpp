#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <tuple>
#include <limits.h>

using namespace std;

// 53. Maximum Subarray (Array, Divide and Conquer)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int mx = 0;
    
    vector<int> nums = {-1};
    vector<int> candidates = {};
    vector<int>::iterator iter;
    vector<int>::iterator iter2;
    vector<int>::iterator iter3;
    
    for (int i = 0; i < nums.size(); i++)
    {
        mx += nums[i];
    }
    candidates.push_back(mx);
    
    for (iter = nums.begin(); iter != nums.end(); iter++)
    {
        for (iter2 = iter; iter2 != nums.end(); iter2++)
        {
            int tmp = INT_MIN;
            for (iter3 = iter; iter3 != iter2; iter3++)
            {
                tmp += *iter3;
            }
            tmp -= INT_MIN;
            candidates.push_back(tmp);
        }
    }
    
    mx = candidates[0];
    if(candidates.size() >= 2)
    {
        for (int i = 1; i < candidates.size(); i++)
        {
            mx = max(mx, candidates[i]);
        }
    }
    cout << mx;

    return 0;
}