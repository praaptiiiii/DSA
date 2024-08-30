class Solution {
public:
    void pre(TreeNode* root, vector<TreeNode*>& ans){
        if (root == NULL){
            return;
        }
        ans.push_back(root);
        pre(root->left, ans);
        pre(root->right, ans);
    }
    
    void list(vector<TreeNode*> ans, TreeNode* temp){
        for (int i = 1; i < ans.size(); i++){
            temp->left = NULL;
            temp->right = ans[i];
            temp = temp->right;
        }
    }
    
    void flatten(TreeNode* root) {
        if (root == NULL) return;
        vector<TreeNode*> ans;
        pre(root, ans);
        TreeNode* temp = root;
        list(ans, temp);
    }
};
