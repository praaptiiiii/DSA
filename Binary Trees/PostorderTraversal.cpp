class Solution {
public:
    void post(TreeNode* root, vector<int>&ans){
        if (root==NULL){
            return;
        }
        post(root->left,ans);
        post(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        post(root,ans);
        return ans;
    }
};
