#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotate(vector<int> &arr, int k){
    k=k%arr.size();
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
}

int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    int k=11;
    rotate(arr,k);
    for (auto i: arr){
        cout<<i<<" ";
    }

    return 0;
}
