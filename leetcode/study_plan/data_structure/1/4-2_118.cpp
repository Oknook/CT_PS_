#include <iostream>
#include <vector>

using namespace std;

// 118. Pascal's Triangle

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> answer = {{1}};
    vector<int> tmp;
    for (int i = 1; i < numRows; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) tmp.push_back(1);
            else tmp.push_back(answer[i-1][j] + answer[i-1][j-1]);
        }
        answer.push_back(tmp);
        tmp.clear();
    }
    return answer;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<vector<int>> ans = generate(6);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}