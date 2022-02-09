#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_set<int> s;
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout << s.find(3)-s.begin();
    
    return 0;
}