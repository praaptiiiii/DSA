#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void comb (vector<int>&arr, vector<int>&temp, vector<vector<int>>&ans, int index, int sum){
    if (sum==0){
        ans.push_back(temp);
        return;
    }
    for (int i=index; i<arr.size();i++){
        if (index<i && arr[i]==arr[index]) {
            continue;
        }
        if (arr[i]>sum){
            break;
        }
        temp.push_back(arr[i]);
        comb(arr,temp,ans,i+1,sum-arr[i]);
        temp.pop_back();
    }
}

int main()
{
    vector<int>arr={7,3,6,2,5,4};
    sort(arr.begin(),arr.end());
    vector<int>temp;
    vector<vector<int>>ans;
    comb(arr,temp,ans,0,7);
    for (auto vec: ans){
        cout<<"{";
        for (auto it: vec){
            cout<<" "<<it<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}
