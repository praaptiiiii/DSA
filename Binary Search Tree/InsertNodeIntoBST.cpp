class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int n) {
        if (root == NULL) return new TreeNode(n);

        TreeNode* ans = root;
        
        while (root != NULL) {
            if (n < root->val) {
                if (root->left == NULL) {
                    root->left = new TreeNode(n);
                    return ans;
                }
                root = root->left;
            } 
            else {
                if (root->right == NULL) {
                    root->right = new TreeNode(n);
                    return ans;
                }
                root = root->right;
            }
        }
        return ans;
    }
};
