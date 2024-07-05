#include <iostream>
#include<vector>
#include<string>
using namespace std;

bool check(string word, int start, int end){
    while (start<end){
        if (word[start]!=word[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void pal(int index, string word, vector<string>&sub,vector<vector<string>>&ans){
    if (index==word.size()){
        ans.push_back(sub);
        return;
    }
    for(int i=index; i<word.size();i++){
        if (check(word,index,i)){
            sub.push_back(word.substr(index,i-index+1));
            pal(i+1,word,sub,ans);
            sub.pop_back();
        }
    }
}

int main()
{
    string word="aab";
    vector<string>sub;
    vector<vector<string>>ans;
    pal(0,word,sub,ans);
    for (auto i:ans){
        for (auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
