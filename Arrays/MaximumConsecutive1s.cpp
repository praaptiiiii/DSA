#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>arr={1,1,0,1,1,1,1,1,0,0,0,1,1,1,0,0,1,1};
    int count=0; 
    int ans=0;
    int n=arr.size();
    for (int i=0; i<n; i++){
        if (arr[i]==1){
            count++;
            ans=max(ans,count);
        }
        else{
            count=0;
        }
        
    }
    cout<<ans;
    return 0;
}
