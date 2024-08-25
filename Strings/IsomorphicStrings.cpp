class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>m(256,0);
        vector<int>n(256,0);
        int x = s.size(); 
        for (int i = 0; i < x; i++) {
            if (m[s[i]] != n[t[i]]){
                return false;
            } 
            m[s[i]] = i + 1;
            n[t[i]] = i + 1;
        }
        return true;
    }
};
