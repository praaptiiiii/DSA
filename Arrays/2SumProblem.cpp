#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={2,4,3,9,8};
    int target=13;
    int i=0; 
    int j=arr.size()-1;
    
    sort(arr.begin(),arr.end());
    
    while (i<j){
        if (arr[i]+arr[j]==target){
            cout<<arr[i]<<" + "<<arr[j];
            break;
        }
        else if (arr[i]+arr[j]>target){
            j--;
        }
        else if (arr[i]+arr[j]<target){
            i++;
        }
    }
    return 0;
}
