#include <iostream>
#include <vector>
using namespace std;

void un(vector<int> &arr1, vector<int> &arr2, vector<int> &ans){
    int i = 0, j = 0;
    int n1 = arr1.size();
    int n2 = arr2.size();
    
    while (i < n1 && j < n2){
        if (arr1[i] <= arr2[j]) {
            if (ans.empty() || arr1[i] != ans.back()) {
                ans.push_back(arr1[i]);
            }
            i++;
        } else if (arr1[i] > arr2[j]) {
            if (ans.empty() || arr2[j] != ans.back()) {
                ans.push_back(arr2[j]);
            }
            j++;
        } 
    }

    while (i < n1) {
        if (ans.empty() || arr1[i] != ans.back()) {
            ans.push_back(arr1[i]);
        }
        i++;
    }

    while (j < n2) {
        if (ans.empty() || arr2[j] != ans.back()) {
            ans.push_back(arr2[j]);
        }
        j++;
    }
}

int main()
{
    vector<int> arr1 = {1, 3, 4, 6, 8};
    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> ans;
    un(arr1, arr2, ans);
    for (auto i : ans){
        cout << i << " ";
    }

    return 0;
}
