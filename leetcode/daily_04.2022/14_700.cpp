class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) return {};
        if (val == root->val) return root;
        auto d1 = searchBST(root->left, val);
        if (d1 != NULL) return d1;
        auto d2 = searchBST(root->right, val);
        if (d2 != NULL) return d2;
        return NULL;
    }
};