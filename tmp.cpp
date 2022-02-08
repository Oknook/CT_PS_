#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s = "asdf";
    string t = "asdfa";
    multiset<char> tt(t.begin(), t.end());
    for(int i = 0; i < s.length(); i++) {
        tt.erase(tt.find(s[i]));
    }
    cout << *tt.upper_bound('A');
    
    return 0;
}