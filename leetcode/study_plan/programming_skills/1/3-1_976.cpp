#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        
        for (int i = 0; i < nums.size()-2; i++) {
            if (nums[i] < nums[i+1]+nums[i+2]) return nums[i]+nums[i+1]+nums[i+2];
        }
        return 0;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums = {2,1,2};
    cout << largestPerimeter(nums);

    return 0;
}