#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

// 532. K-diff Pairs in an Array

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        multiset<int> s(nums.begin(), nums.end());
        multiset<int>::iterator iter;
        multiset<int>::iterator iter2;
        map<int,int> answer;
        for (iter = s.begin(); iter != s.end();) {
            // leetcode ����ÿ��� ������ ���µ�
            // vscode������ ���� ���� �����ϸ� �����Ͱ� ����
            iter2 = iter;
            iter++;
            int tmp = *iter2;
            s.erase(s.find(*iter2));
            if (s.find(tmp+k) != s.end()) answer.insert({tmp+k, tmp});
        }
        return answer.size();
    }
};

int main()
{
    Solution sol;
    vector<int> v = {3,1,4,1,5};
    int a = sol.findPairs(v, 2);
    cout << a;

    return 0;
}