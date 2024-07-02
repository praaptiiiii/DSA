#include <iostream>
#include <vector>
#include<numeric>
using namespace std;

void sub(vector<int>&arr, int &ans,vector<int> &temp, int n, int i, int k){
    if (i>=n){
        if (accumulate(temp.begin(),temp.end(),0)==k){
        ans++;
    }
        return;
    }
    sub(arr,ans,temp,n,i+1,k);
    temp.push_back(arr[i]);
    sub(arr,ans,temp,n,i+1,k);
    temp.pop_back();
    
}
int main() {
    vector<int>arr={1,0,2,-1};
    int ans=0;
    vector<int> temp;
    int n=arr.size();
    sub(arr,ans,temp,n,0, 2);
    cout<<ans;
    return 0;
}
