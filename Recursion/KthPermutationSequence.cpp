#include <iostream>
#include<vector>
#include<string>
using namespace std;

string perm(int n, int k){
    string ans="";
    vector<int>nums;
    int fact=1;
    for (int i=1; i<n; i++){
        fact*=i;
        nums.push_back(i);
    }
    nums.push_back(n);
    k-=1;
    while (true){
        ans+=to_string(nums[k/fact]);
        nums.erase(nums.begin()+k/fact);
        if (nums.size()==0){
            break;
        }
        k=k%fact;
        fact/=nums.size();
    }
    return ans;
}

int main()
{
    cout<<perm(4,17);
    return 0;
}
