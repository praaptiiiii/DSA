class Solution {
public:
    void inorder(TreeNode* root, int k, int& count, int& result) {
        if (root == nullptr) return;
        inorder(root->left, k, count, result);
        count++;
        if (count == k) {
            result = root->val;
            return;
        }
        inorder(root->right, k, count, result);
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int count = 0;
        int result = -1;
        inorder(root, k, count, result);
        return result;
    }
};
