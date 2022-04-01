#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0, j = s.size()-1; j > i; i++, j--) {
            swap(s[i], s[j]);
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<char> s = {'h','e','l','l','o'};
    Solution solution;
    solution.reverseString(s);
    for (char i : s) {
        cout << i;
    }

    return 0;
}