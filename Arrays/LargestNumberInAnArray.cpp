#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr={2,5,4,6,9,8,13,7};
    int largest=arr[0];
    for (int i=0; i<arr.size();i++){
        if (arr[i]>largest){
            largest=arr[i];
        }
    }
   cout<<largest;
    return 0;
}
