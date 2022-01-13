#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findMinArrowShots(vector<vector<int>>& points) {
    int n = points.size(), index=0;
    sort(points.begin(), points.end());
    for(int i=1; i<n; i++){
        int left = max(points[index][0], points[i][0]), right = min(points[index][1], points[i][1]);
        if(left <= right)
            points[index][0] = left, points[index][1] = right;
        else{
            index++;
            points[index][0] = points[i][0], points[index][1] = points[i][1];
        }
    }
    return index+1;
}

int main()
{
    vector<vector<int>> points = {{10,16},{2,8},{1,6},{7,12}};
}