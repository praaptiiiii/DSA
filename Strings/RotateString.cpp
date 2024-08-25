class Solution {
public:
    bool rotateString(string s, string goal) {
        string temp1 = s+s;
        if (temp1.find(goal)!=-1 && goal.length()==s.length()){
            return true;
        }
        else{
            return false;
        }
    }
};
