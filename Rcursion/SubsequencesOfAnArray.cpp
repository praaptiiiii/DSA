#include <iostream>
#include <vector>
using namespace std;

void sub(vector<int>&arr, vector<vector<int>>&ans,vector<int> &temp, int n, int i){
    if (i==n){
        ans.push_back(temp);
        return;
    }
    sub(arr,ans,temp,n,i+1);
    temp.push_back(arr[i]);
    sub(arr,ans,temp,n,i+1);
    temp.pop_back();
    
}
int main() {
    vector<int>arr={1,2,3};
    vector<vector<int>>ans;
    vector<int> temp;
    int n=arr.size();
    sub(arr,ans,temp,n,0);
    for (auto item: ans){
        cout<<"{";
        for (auto j: item){
            cout<<j<<",";
        }
        cout<<"}"<<endl;
    }
    return 0;
}
