#include <iostream>
using namespace std;

void selection(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int arr[] = {8, 12, 9, 13, 4, 5, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    return 0;
}
