#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mn = 10001;
        int answer = -1;
        for (int i = 0; i < points.size(); i++) {
            if (points[i][0] == x && points[i][1] == y) return i;
            if (points[i][0] == x) {
                if (mn > abs(y-points[i][1])) {
                    mn = abs(y-points[i][1]);
                    answer = i;
                }
            }
            if (points[i][1] == y) {
                if (mn > abs(x-points[i][0])) {
                    mn = abs(x-points[i][0]);
                    answer = i;
                }
            }
        }
        return answer;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solution sol;
    vector<vector<int>> points = {{1,2},{3,1},{2,4},{2,3},{4,4}};
    int a = sol.nearestValidPoint(3, 4, points);
    cout << a;
    
    return 0;
}