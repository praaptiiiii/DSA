class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(),s.end());
        int i=0; int j=s.size()-1;
        int x=0;
        int y=min(s[i].size(),s[j].size());
        while (x<y && s[i][x]==s[j][x]){
            x++;
        }
        return s[i].substr(0,x);
    }
};
