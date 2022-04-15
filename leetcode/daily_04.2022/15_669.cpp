class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        if (!root) return NULL;
        
        if (root->val >= low && root->val <= high) {
            root->left = trimBST(root->left, low, high);//Trim the left subtree
            root->right = trimBST(root->right, low, high);//Trim the right subtree
        } else if (root->val < low) {
            root = trimBST(root->right, low, high);
        } else if (root->val > high) {
            root = trimBST(root->left, low, high);
        }
        return root;
    }
};