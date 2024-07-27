class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int>ans;
        int m=arr[n-1];
        ans.push_back(arr[n-1]);
        for (int i=n-2; i>=0; i--){
            if (arr[i]>=m){
                ans.push_back(arr[i]);
                m=max(m,arr[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
