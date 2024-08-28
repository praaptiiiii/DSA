class Solution {
public:
    int height(TreeNode* root, int ans){
        if (root==NULL){
            return 0;
        }
        ans+=max(height(root->left,ans),height(root->right,ans))+1;
        return ans;
    }
    int maxDepth(TreeNode* root) {
        int ans=height(root,0);
        return ans;
    }
};
