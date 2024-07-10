#include <iostream>
#include<vector>
using namespace std;

int main()
{   
    vector<int>arr={1,2,3,2,1,2,1,2,2,2,1,5,1};
    int count=0;
    int element;
    for (int i=0; i<arr.size(); i++){
        if (count==0){
            element=arr[i];
            count=1;
        }
        if (arr[i]==element){
            count++;
        }
        else{
            count--;
        }
        
    }
    cout<<element;
    return 0;
}
