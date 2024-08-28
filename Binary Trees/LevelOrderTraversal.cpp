class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if (root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()){
            int s=q.size();
            vector<int>temp;
            for (int i=0; i<s; i++){
                TreeNode* x=q.front();
                q.pop();
                if (x->left!=NULL){
                    q.push(x->left);
                }
                if (x->right!=NULL){
                    q.push(x->right);
                }
                temp.push_back(x->val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};