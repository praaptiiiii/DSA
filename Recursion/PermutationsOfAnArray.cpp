/*
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void perm(vector<int> &arr, vector<vector<int>> &ans, vector<int>temp, int freq[]){
    if (temp.size()==arr.size()){
        ans.push_back(temp);
        return;
    }
    for (int i=0; i<arr.size(); i++){
        if (!freq[i]){
            temp.push_back(arr[i]);
            freq[i]=1;
            perm(arr,ans,temp,freq);
            freq[i]=0;
            temp.pop_back();
        }
    }
}

int main()
{
    vector<int> arr={1,5,3};
    vector<int>temp;
    vector<vector<int>> ans;
    int freq[arr.size()]={0};
    perm(arr,ans,temp,freq);
    
    for (auto vec: ans){
        cout<<"{";
        for (auto item: vec){
            cout<<" "<<item<<" ";
        }
        cout<<"}";
    }
    return 0;
}
*/
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void perm(vector<int> &arr, vector<vector<int>> &ans,int index){
    if (index==arr.size()){
        ans.push_back(arr);
        return;
    }
    for (int i=index; i<arr.size(); i++){
        swap(arr[index],arr[i]);
        perm(arr,ans,index+1);
        swap(arr[index],arr[i]);
    }
}

int main()
{
    vector<int> arr={1,5,3};
    vector<vector<int>> ans;
    perm(arr,ans,0);
    
    for (auto vec: ans){
        cout<<"{";
        for (auto item: vec){
            cout<<" "<<item<<" ";
        }
        cout<<"}";
    }
    return 0;
}
