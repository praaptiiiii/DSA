class Solution {
public:
    bool isAnagram(string s, string t) {
        int x=s.size();
        if (x!=t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for (int i=0; i<x; i++){
            if (s[i]!=t[i]){
                return false;
            }
        }
        return true;
    }
};
