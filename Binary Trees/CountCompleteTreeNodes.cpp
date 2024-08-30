class Solution {
public:
    int count(TreeNode* root){
        if (root==NULL){
            return 0;
        }
        return count(root->left)+count(root->right)+1;
    }
    int countNodes(TreeNode* root){
        return count(root);
    }
};
