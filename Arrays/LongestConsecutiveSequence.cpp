class Solution{
  public:
    int findLongestConseqSubseq(int arr[], int n)
    {
      int ans=0;
      unordered_set<int>s;
      for (int i=0; i<n; i++){
          s.insert(arr[i]);
      }
      for (auto i: s){
          if (s.find(i-1)==s.end()){
              int count=1;
              int num=i;
              while (s.find(num+1)!=s.end()){
                  count++;
                  num++;
              }
              ans=max(ans,count);
          }
      }
      return ans;
    }
};
