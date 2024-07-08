#include <bits/stdc++.h>
using namespace std;


int main()
{
   vector<int>arr={1,1,2,2,3,3,4,5,5,6,6,7,7};
   int n=arr.size();
   int ans=0;
   for (int i=0; i<n; i++){
       ans=ans^arr[i];
   }
   cout<<ans;
    return 0;
}
