#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subset(vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int index){
    ans.push_back(temp);
    for (int i=index; i<arr.size();i++){
        if (i>index && arr[i]==arr[i-1]){
            continue;
        }
        temp.push_back(arr[i]);
        subset(arr,temp,ans,i+1);
        temp.pop_back();
    }
}

int main()
{
    vector<int> arr={1,2,2};
    vector<vector<int>> ans;
    vector<int>temp;
    sort(arr.begin(),arr.end());
    subset(arr,temp,ans,0);
    for (auto it: ans){
        cout<<"{";
        for (auto element: it){
            cout<<" "<<element<<" ";
        }
        cout<<"}"<<endl;
    }
    return 0;
}
