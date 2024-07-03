#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void count(vector<int> &arr, vector<int> &ans, int sum, int i){
    if (i>=arr.size()){
        ans.push_back(sum);
        return;
    }
    count(arr,ans,sum,i+1);
    count(arr,ans,sum+arr[i],i+1);
}

int main()
{
    vector<int> arr={1,5,3};
    vector<int> ans;
    count(arr,ans,0,0);
    sort(ans.begin(),ans.end());
    for (int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
