#include <iostream>
#include <vector>
using namespace std;

int merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    int count=0;
    
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            count+=mid-left+1;
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
    return count;
}

int mergesort(vector<int>& arr, int low, int high) {
    int count=0;
    if (low >= high) {
        return count;
    }
    int mid = low + (high - low) / 2;
    count+=mergesort(arr, low, mid);
    count+=mergesort(arr, mid + 1, high);
    count+=merge(arr, low, mid, high);
    return count;
}

int main() {
    vector<int> arr = {5,3,2,4,1};
    int n = arr.size();
    cout<<mergesort(arr, 0, n-1);
    return 0;
}
