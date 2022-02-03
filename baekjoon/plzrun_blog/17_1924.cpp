#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> dfm = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    vector<string> dow = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int x, y, day = 0;
    cin >> x >> y;
    
    for (int i = 0; i < x; i++)
    {
        day += dfm[i];
    }
    day += y;

    cout << dow[day%7];

    return 0;
}