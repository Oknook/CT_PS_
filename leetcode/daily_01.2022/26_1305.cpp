#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void pushback(TreeNode* root, vector<int> &v) {
        if(root != NULL){
            v.push_back(root->val);
            pushback(root->left, v);
            pushback(root->right, v);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v;
        pushback(root1, v);
        pushback(root2, v);
        sort(v.begin(), v.end());
        return v;
    }
};

int main()
{
    TreeNode rl1 = TreeNode(8);
    TreeNode root1 = TreeNode(1, nullptr, &rl1);

    TreeNode ll2 = TreeNode(1);
    TreeNode root2 = TreeNode(8, &ll2, nullptr);

    vector<int> vv = Solution().getAllElements(&root1, &root2);
    for (int i = 0; i < vv.size(); i++)
    {
        cout << vv[i] << "\n";
    }

    return 0;
}