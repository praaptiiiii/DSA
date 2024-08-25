class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size()-1;
        int j=0;
        while (j<i && num[j]=='0'){
            j++;
        }
        while (i>=j){
            int digit=num[i]-'0';
            if (digit%2==0){
                i--;
            }
            else{
                break;
            }
        }
        if (i==j && (num[i]-'0')%2==0){
            return "";
        }
        return num.substr(j,i-j+1);
    }
};
