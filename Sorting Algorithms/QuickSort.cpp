#include <iostream>
#include<vector>
using namespace std;

int partition(vector<int>&arr, int low, int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while (i<j){
        while (arr[i]<=pivot && i<high){
            i++;
        }
        while (arr[j]>pivot && j>low){
            j--;
        }
        if (i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(vector<int> &arr, int low, int high){
    if (low < high){
        int pivot=partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}

int main()
{
    vector<int>arr={9,3,4,8,2,1,0,6,7};
    quicksort(arr,0,arr.size()-1);
    for (int i=0; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
