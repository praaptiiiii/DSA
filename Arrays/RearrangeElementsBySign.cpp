#include <bits/stdc++.h>
using namespace std;

int main()
{   
    vector<int>arr={-7,-1,5,3,-6,1};
    vector<int>ans(arr.size(),0);
    int j=0, k=1;
    for (int i=0; i<arr.size();i++){
        if (arr[i]<0){
            ans[j]=arr[i];
            j+=2;
        }
        else{
            ans[k]=arr[i];
            k+=2;
        }
        
    }
    for (auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}
