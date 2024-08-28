class Solution {
public:
    int check(TreeNode* root, int& ans){
        if (root==NULL){
            return 0;
        }
        int l=check(root->left,ans);
        int r=check(root->right,ans);
        int dia=l+r;
        
        if (dia>ans){
            ans=dia;
        }

        return max(l,r)+1;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        int ans=0;
        check(root,ans);
        return ans;
    }
};
