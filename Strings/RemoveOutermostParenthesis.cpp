class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>c;
        string ans="";
        int start=0;
        for (int i=0; i<s.size(); i++){
            if (s[i]=='('){
                c.push(s[i]);
            }
            else if (s[i]==')' && !c.empty()){
                c.pop();
            }
            if (c.empty()){
                ans.append(s.substr(start+1,i-start-1));
                start=i+1;
            }
        }
        return ans;
    }
};
