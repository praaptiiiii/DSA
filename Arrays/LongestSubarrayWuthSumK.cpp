#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1,2,3,1,1,1,1,4,2,3,0};
    long long sum=0; 
    int len=0;
    int target=6;
    int n=arr.size();
    /* for array containing negatives and positives
    map<long long, int>m;
    for (int i=0; i<n; i++){
        sum+=arr[i];
        if (sum==target){
            len=max(len,i+1);
        }
        int rem=sum-target;
        if (m.find(rem)!=m.end()){
            int templen=i-m[rem];
            len=max(len,templen);
        }
        if(m.find(sum)==m.end()){
            m[sum]=i;
        }
    }*/
    
    // for array containing only positives
    int i=0; int j=0;
    while (j<n){
        sum+=arr[j];
        if (sum==target){
            len=max(len,j-i+1);
            j++;
        }
        else if (sum<target){
            j++;
        }
        else if (sum>target){
            sum=sum-arr[i];
            i++;
            j++;
        }
    }
    cout<<len;
    return 0;
}
