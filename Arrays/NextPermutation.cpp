#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={2,1,5,4,3,0,0};
    int n=arr.size()-1;
    int x=n;
    while (arr[x-1]>=arr[x]){
        x--;
    }
    while (arr[n]<arr[x-1]){
        n--;
    }
    swap(arr[x-1],arr[n]);
    reverse(arr.begin()+x,arr.end());
    for (auto i: arr){
        cout<<i;
    }
    return 0;
}
