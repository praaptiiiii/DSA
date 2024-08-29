class Solution {
public:
    void put(TreeNode* root, map<int, vector<pair<int, int>>>& m, int row, int col) {
        if (root == nullptr) {
            return;
        }
        m[col].emplace_back(row, root->val);
        put(root->left, m, row + 1, col - 1);
        put(root->right, m, row + 1, col + 1);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int, int>>> m;
        put(root, m, 0, 0);

        vector<vector<int>> ans;

        for (auto& i : m) {
            sort(i.second.begin(), i.second.end());
            vector<int> colVals;
            for (auto& p : i.second) {
                colVals.push_back(p.second);
            }
            ans.push_back(colVals);
        }

        return ans;
    }
};
