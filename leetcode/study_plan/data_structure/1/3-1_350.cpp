#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 350. Intersection of Two Arrays II

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    nums1.erase(set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums1.begin()), nums1.end());
    return nums1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int> answer = intersect(nums1, nums2);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }

    return 0;
}