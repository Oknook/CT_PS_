#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <tuple>

using namespace std;

// 53. Maximum Subarray (Array, Divide and Conquer)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;

    vector<int> nums = {-1, -2, -3};
    vector<int> candidates = {};
    for (int i = 0; i < nums.size(); i++)
    {
        candidates[cnt] += nums[i];
    }
    cout << "r!";
    cnt++;
    vector<int>::iterator iter;
    vector<int>::iterator iter2;
    vector<int>::iterator iter3;
    for (iter = nums.begin(); iter != nums.end(); iter++)
    {
        for (iter2 = iter; iter2 != nums.end(); iter2++)
        {
            for (iter3 = iter; iter3 != iter2; iter3++)
            {
                candidates[cnt] += *iter3;
            }
            cnt++;
        }
    }
    int mx = candidates[0];
    for (int i = 1; i < candidates.size(); i++)
    {
        mx = max(mx, candidates[i]);
    }
    
    // return
    cout << mx;

    return 0;
}