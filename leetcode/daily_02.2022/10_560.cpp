#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// 560. Subarray Sum Equals K

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> seen = {{0, 1}};
    int count = 0, sum = 0;
    for (int n: nums) {
        sum += n;
        if (seen.end() != seen.find(sum - k)) count += seen[sum - k];
        seen[sum]++;
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums = {1,2,3};
    int k = 3;
    cout << subarraySum(nums, k);

    return 0;
}