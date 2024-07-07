#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    vector<int>arr={2,5,4,6,9,8,13,7};
    int largest=arr[0];
    int seclarge=INT_MIN;
    for (int i=0; i<arr.size();i++){
        if (arr[i]>largest){
            seclarge=largest;
            largest=arr[i];
        }
        else if (arr[i]>seclarge && arr[i]!=largest){
            seclarge=arr[i];
        }
    }
    cout<<seclarge;

    return 0;
}
