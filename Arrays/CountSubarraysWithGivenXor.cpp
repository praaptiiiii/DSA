int solve(int[] arr, int n, int b) {
    int ans=0;
    int x=0;
    m[0]=1;
    unordered_map<int,int>m;
    for (int i=0; i<n; i++){
        x=x^arr[i];
        int xr=x^b;
        ans+=m[xr];
        m[x]++;
    }
    return ans;
}
