#include <iostream>
#include <vector>

using namespace std;

// 53. Maximum Subarray (Array, Divide and Conquer)

// kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxSum = INT_MIN;
        int currSum = 0;

        for (int i = 0; i <= n - 1; i++) {
            currSum += nums[i];

            if (currSum > maxSum) {
                maxSum = currSum;
            }

            if (currSum < 0) {
                currSum = 0;
            }
        }

        return maxSum;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    Solution sol;
    cout << sol.maxSubArray(nums);

    return 0;
}