#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> melody(8);
    vector<int> ascending = {1,2,3,4,5,6,7,8};
    vector<int> descending = {8,7,6,5,4,3,2,1};
    for (int i = 0; i < 8; i++)
    {
        cin >> melody[i];
    }
    if (melody == ascending) cout << "ascending";
    else if (melody == descending) cout << "descending";
    else cout << "mixed";
    
    return 0;
}