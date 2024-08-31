class Solution{

public:
    int floor(Node* root, int x) {
        if (root==NULL) return -1;
        int ans=-1;
        while (root!=NULL){
            if (root->data==x){
                return root->data;
            }
            else if (root->data<x){
                ans=root->data;
                root=root->right;
            }
            else{
                root=root->left;
            }
        }
        return ans;
    }
};
