#include <iostream>
#include<vector>
using namespace std;

void comb (vector<int>&arr, vector<int>&temp, vector<vector<int>>&ans, int index, int sum, int target){
    if (sum==target){
        ans.push_back(temp);
        return;
    }
    if (index >= arr.size() || sum > target) {
        return;
    }
    comb(arr,temp,ans,index+1,sum,target);
    temp.push_back(arr[index]);
    comb(arr,temp,ans,index,sum+arr[index],target);
    temp.pop_back();
}

int main()
{
    vector<int>arr={2,3,6,7};
    vector<int>temp;
    vector<vector<int>>ans;
    comb(arr,temp,ans,0,0,7);
    for (auto vec: ans){
        cout<<"{";
        for (auto it: vec){
            cout<<" "<<it<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}
