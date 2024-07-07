#include <iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n=36;
    vector<int>ans;
    int limit=sqrt(n);
    for (int i=1; i<=limit; i++){
        if (n%i==0){
            ans.push_back(i);
        }
        if (n/i != i){
            ans.push_back(n/i);
        }
    }
    sort(ans.begin(),ans.end());
    for (auto i: ans){
        cout<<i<<" ";
    }
    return 0; 
}
