#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 567. Permutation in String

bool checkInclusion(string s1, string s2) {
        vector<int> cur(26), goal(26);
        for(char c : s1) goal[c - 'a']++;
        for(int i = 0; i < s2.size(); i++) {
            cur[s2[i] - 'a']++;
            if(i >= s1.size()) cur[s2[i - s1.size()] - 'a']--;
            if(goal == cur) return true;
        }
        return false;
    }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1 = "ab";
    string s2 = "eidbaooo";
    bool bv = checkInclusion(s1, s2);
    string answer= bv?"true":"false";
    cout << answer;

    return 0;
}