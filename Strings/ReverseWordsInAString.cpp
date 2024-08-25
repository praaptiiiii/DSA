class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        int n=s.size();
        int i=0; 
        while (i<n){                           
            while (s[i]==' '){
                i++;                            
            }
            if (i>=n){
                break;
            }
            int start=i;
            while (i<n && s[i]!=' '){
                i++;
            }
            int end=i;
            words.push_back(s.substr(start,end-start));
        }
        string ans="";
        int m=words.size()-1;
        for (int i=m; i>=0; i--){
            ans+=words[i];
            if (i>0){
                ans+=' ';
            }
        }
        return ans;
    }
};
