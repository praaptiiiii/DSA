#include <iostream>
#include <vector>
#include<numeric>
using namespace std;

void sub(vector<int>&arr, vector<vector<int>>&ans,vector<int> &temp, int n, int i, int k, bool &a){
    if (i>=n){
        if (accumulate(temp.begin(),temp.end(),0)==k){
            ans.push_back(temp);
            a=true;
        }
        return;
    }
    if (a==false){
        sub(arr,ans,temp,n,i+1,k, a);
        temp.push_back(arr[i]);
        sub(arr,ans,temp,n,i+1,k, a);
        temp.pop_back();
    }
    else{
        return;
    }
    
}
int main() {
    vector<int>arr={1,0,2,-1};
    vector<vector<int>>ans;
    vector<int> temp;
    int n=arr.size();
    bool a=false;
    sub(arr,ans,temp,n,0, 2, a);
    for (auto item: ans){
        cout<<"{";
        for (auto j: item){
            cout<<" "<<j<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}

