#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>arr={1,2,3,5,6,7};
    int n=7;
    int xor1=0, xor2=0;
    for (int i=0; i<n-1; i++){
        xor1=xor1^arr[i];
        xor2=xor2^(i+1);
    }
    xor2=xor2^n;
    
    cout<<(xor1^xor2);
    return 0;
}
