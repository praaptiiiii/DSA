class Solution {
public:
    void put(Node* root, map<int, vector<pair<int, int>>>& m, int row, int col) {
        if (root == NULL) {
            return;
        }
        m[col].emplace_back(row, root->data);
        put(root->left, m, row + 1, col - 1);
        put(root->right, m, row + 1, col + 1);
    }

    vector<int> topView(Node* root) {
        map<int, vector<pair<int, int>>> m;
        put(root, m, 0, 0);

        vector<int> ans;
        for (auto it = m.begin(); it != m.end(); ++it) {
            const auto& col = it->first;
            const auto& nodes = it->second;
            auto top = *min_element(nodes.begin(), nodes.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
                return a.first < b.first;
            });
            ans.push_back(top.second);
        }
        return ans;
    }
};
