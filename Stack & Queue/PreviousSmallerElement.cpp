#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr={1, 6, 4, 10, 2, 5};
    vector<int>ans;
    stack<int>s;
    for (int i=0; i<arr.size();i++){
        if(s.empty()){
            ans.push_back(-1);
        }
        else{
            while (!s.empty() && s.top()>=arr[i]){
                s.pop();
            }
            ans.push_back(s.empty()?-1:s.top());
        }
        s.push(arr[i]);
    }
    for (auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}
