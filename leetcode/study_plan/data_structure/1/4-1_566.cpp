#include <iostream>
#include <vector>

using namespace std;

// 566. Reshape the Matrix

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> mat = {{1,2},{3,4}};

    vector<vector<int>> ans = matrixReshape(mat, 1, 4);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
    if (mat.size() * mat[0].size() != r*c) return mat;

    vector<int> fullelements;
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[0].size(); j++) {
            fullelements.push_back(mat[i][j]);
        }
    }

    int index = 0;
    vector<int> tmp;
    vector<vector<int>> answer;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            tmp.push_back(fullelements[index++]);
        }
        answer.push_back(tmp);
        tmp.clear();
    }
    return answer;
}