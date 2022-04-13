#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> answer(n, vector<int>(n));
        
        int left = 0, right = n-1, roof = 0, floor = n-1;
        int num = 1;
        
        while (left <= right && roof <= floor) {
            for (int i = left; i <= right; i++) {
                answer[roof][i] = num++;
            }
            for (int i = roof+1; i <= floor; i++) {
                answer[i][right] = num++;
            }
            for (int i = right-1; i >= left; i--) {
                answer[floor][i] = num++;
            }
            for (int i = floor-1; i > roof; i--) {
                answer[i][left] = num++;
            }
            left++;
            right--;
            roof++;
            floor--;
        }
        
        return answer;
    }
};

int main() {

    Solution sol;
    int a;
    cin >> a;
    vector<vector<int>> v = sol.generateMatrix(a);
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[0].size(); j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}