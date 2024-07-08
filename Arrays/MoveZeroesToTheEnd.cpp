#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void shift(vector<int> &arr){
    int i=0; int j=1;
    int n=arr.size();
    while (i<n && j<n){
        if (arr[i]==0 && arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        else if (arr[j]==0 && arr[i]!=0){
            i++;
            j++;
        }
        else if (arr[i]==0 && arr[j]==0){
            j++;
        }
    }
}

int main()
{
    vector<int>arr={0,0,1,0,3,4,0,0,6,0,8,0};
    shift(arr);
    for (auto i: arr){
        cout<<i<<" ";
    }

    return 0;
}
