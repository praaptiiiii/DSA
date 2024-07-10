#include <bits/stdc++.h>
using namespace std;


int main()
{   
    vector<int>arr={7,1,5,3,6};
    int profit=0;
    int minimum=INT_MAX;
    for (int i=0; i<arr.size();i++){
        int cost=arr[i]-minimum;
        minimum=min(minimum,arr[i]);
        profit=max(profit,cost);
    }
    cout<<profit;
    return 0;
}
