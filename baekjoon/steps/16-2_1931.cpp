#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(vector<int> a, vector<int> b)
{
    if (a[1] == b[1]) return a[0] < b[0];
    else return a[1] < b[1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, tmp = 0;
    cin >> n;
    vector<vector<int>> timetable(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> timetable[i][0] >> timetable[i][1];
    }
    sort(timetable.begin(), timetable.end(), cmp);
    
    int end = timetable[0][1];
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        int start = timetable[i][0];
        if (start >= end)
        {
            end = timetable[i][1];
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}