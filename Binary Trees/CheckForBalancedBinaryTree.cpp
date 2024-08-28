class Solution {
public:
    int check(TreeNode* root, bool& ans){
        if (root==NULL){
            return 0;
        }
        int l=check(root->left,ans);
        int r=check(root->right,ans);

        if (abs(l-r)>1){
            ans=false;
        }

        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        bool ans=true;
        check(root,ans);
        return ans;   
    }
};
