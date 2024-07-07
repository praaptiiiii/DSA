#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr={1,1,2,2,2,3,3};
    int x=0;
    int n=arr.size();
    for (int i=1; i<n;i++){
        if (arr[x]!=arr[i]){
            x+=1;
            arr[x]=arr[i];
        }
    }
    cout<<"Length: "<<x+1<<endl;
    for (int i=0; i<=x;i++){
        cout<<arr[i];
    }
    return 0; 
}
