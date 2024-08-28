class Solution {
public:
    int sum(TreeNode* root, int& ans){
        if (root == NULL){
            return 0;
        }

        int left = max(0, sum(root->left, ans));
        int right = max(0, sum(root->right, ans));
        
        ans = max(ans, left + right + root->val);
        
        return max(left, right) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        sum(root, ans);
        return ans;
    }
};
