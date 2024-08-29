class Solution {
public:
    void way(vector<vector<int>>& ans, Node* root, vector<int>& temp) {
        if (root == NULL) {
            return;
        }
        temp.push_back(root->data);
        
        if (root->left == NULL && root->right == NULL) {
            ans.push_back(temp);
        } 
        else {
            way(ans, root->left, temp);
            way(ans, root->right, temp);
        }
        temp.pop_back();
    }
    
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        way(ans, root, temp);
        return ans;
    }
};
