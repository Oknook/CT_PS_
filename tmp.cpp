#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <typeinfo>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<int, int> seen = {{3, 3}};

    for (auto iter = seen.begin() ; iter != seen.end(); iter++)
    {
        cout << iter->first << " " << iter->second << endl;
    } cout << endl;

    for (auto i : seen) {
        cout << i.first << " " << i.second << "\n";
    }
    
    
    return 0;
}