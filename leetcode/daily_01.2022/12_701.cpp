#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * Definition for a binary tree node.
 */
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* ptr = root;
        if (ptr == nullptr){
            return new TreeNode(val);
        }
        if (val > root->val){
            if (ptr->right == nullptr){
                ptr->right = new TreeNode(val);
            }
            else insertIntoBST(ptr->right, val);
        }
        else{
            if (ptr->left == nullptr){
                ptr->left = new TreeNode(val);
            }
            else insertIntoBST(ptr->left, val);
        }
        return root;
    }
};

void BST_PreOrder(TreeNode* tree, vector<int>& pre)
{
    if (tree == NULL)
        return;
    pre.push_back(tree->val);
    BST_PreOrder(tree->left, pre);
    BST_PreOrder(tree->right, pre);
}
void pri(int n)
{
    cout << n << " ";
}

int main(){
    TreeNode* one = new TreeNode(1);
    TreeNode* three = new TreeNode(3);
    TreeNode* two = new TreeNode(2, one, three);
    TreeNode* seven = new TreeNode(7);
    TreeNode* root = new TreeNode(4, two, seven);
    int val;
    cin >> val;
    Solution* solution = new Solution;
    solution->insertIntoBST(root, val);
    
    vector<int> v;
    BST_PreOrder(root, v);
    for_each(v.begin(), v.end(), pri);

    return 0;
}