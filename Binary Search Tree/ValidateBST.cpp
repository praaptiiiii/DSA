class Solution {
public:
    bool in(TreeNode* root, vector<int>& ans) {
        if (root == nullptr) {
            return true;
        }
        if (!in(root->left, ans)) {
            return false;
        }
        if (!ans.empty() && ans.back() >= root->val) {
            return false;
        }
        ans.push_back(root->val);
        return in(root->right, ans);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        return in(root, ans);
    }
};
