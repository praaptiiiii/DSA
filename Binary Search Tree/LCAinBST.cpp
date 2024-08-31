class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root==NULL){
            return NULL;
        }
        TreeNode* x; TreeNode* y;
        if (p->val>q->val){
            x=q;
            y=p;
        }
        else{
            x=p;
            y=q;
        }
        while (root!=NULL){
            if (root->val>x->val && root->val>y->val){
                root=root->left;
            }
            else if (root->val<x->val && root->val<y->val){
                root=root->right;
            }
            else{
                break;
            }
        }
        return root;
    }
};
