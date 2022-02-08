#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

// 389. Find the Difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        multiset<char> tt(t.begin(), t.end());
        for(int i = 0; i < s.length(); i++) {
            tt.erase(tt.find(s[i]));
        }
        return *tt.upper_bound('A');
    }
    char findTheDifference2(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i = 0; i < s.length(); i++)
        {
            if (s[i] != t[i]) return t[i];
        }
        return t[t.length()-1];
    }
};

int main()
{
    string s = "asbfkjabkalkanfklsafalnkfnddsaf";
    string t = "asbfkjabkalkafnfklsafalnkfnddsaf";
    Solution sol;
    cout << sol.findTheDifference(s, t) << "\n";
    cout << sol.findTheDifference2(s, t);
    return 0;
}