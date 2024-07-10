#include <iostream>
#include<vector>
using namespace std;

int main()
{   
    vector<int>arr={-2,-3,6,-1,-4,7};
    int sum=0;
    int ans=-100;
    int start=-1;
    for (int i=0; i<arr.size();i++){
        if (sum==0){
            start=i;
        }
        sum+=arr[i];
        if (sum>ans){
            ans=sum;
        }
        if (sum<0){
            sum=0;
        }
    }
    cout<<ans;
    return 0;
}
