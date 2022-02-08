#include <iostream>

using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while (num>=10) {
            int sum = 0;
            
            int n = num;
            do
            {
                sum += n%10;
                n = n/10;
            } while(n>=10);
            sum += n;
            
            num = sum;
        }
        
        return num;
        // return 1 + (num - 1) % 9;
    }
};

int main()
{
    Solution sol;
    int num;
    cout << "input number : ";
    cin >> num;
    cout << sol.addDigits(num);
    // digit root(ÀÚ¸´¼ö±Ù)
    // cout << 1 + (num-1)%9;
}