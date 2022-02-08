#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// sliding window
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1) return 0;
        
        int answer = 0;
        vector<int>::iterator start = prices.begin();
        vector<int>::iterator end = start + 1;
        
        while(end != prices.end()){
            if(*start < *end)
                answer = max(answer, *end-*start);
            else start = end;
            end++;
        }
        return answer;
    }
};

int main()
{
    vector<int> price = {7,1,5,3,6,4};
    Solution sol;
    cout << sol.maxProfit(price);
}