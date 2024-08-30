class Solution {
public:
    TreeNode* check(TreeNode* root, TreeNode* p, TreeNode* q){
        if (root == NULL) {
            return NULL;
        }
        if (root == p || root == q) {
            return root;
        }

        TreeNode* l = check(root->left, p, q);
        TreeNode* r = check(root->right, p, q);

        if (l != NULL && r != NULL) {
            return root;
        }
        return l != NULL ? l : r;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        return check(root, p, q);
    }
};
