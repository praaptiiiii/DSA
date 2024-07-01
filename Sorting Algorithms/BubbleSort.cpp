#include <iostream>
using namespace std;

void bubble(int arr[], int n){
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-1; j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[]={8,12,9,13,4,5,10,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,n);
    for (int i=0; i<n;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}
