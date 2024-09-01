class Solution {
public:

    void in(TreeNode* root, vector<int>& ans){
        if (root==NULL){
            return;
        }
        in(root->left,ans);
        ans.push_back(root->val);
        in(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        if (root==NULL || (root->left==NULL && root->right==NULL)){
            return false;
        }
        vector<int>ans;
        in(root,ans);

        int i=0; int j=ans.size()-1;
        while (i<j){
            if (ans[i]+ans[j]==k){
                return true;
            }
            else if (ans[i]+ans[j]<k){
                i++;
            }
            else {
                j--;
            }
        }
        return false;
    }
};
