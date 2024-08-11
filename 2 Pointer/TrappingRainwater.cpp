class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=height[0]; int right=height[n-1];
        int l=0; int r=n-1; int ans=0;

        while (l<r){
            if(height[l]<height[r]){
                if (left>height[l]){
                    ans+=left-height[l];
                }
                else{
                    left=height[l];
                }
                l++;
            }
            else{
                if (right>height[r]){
                    ans+=right-height[r];
                    r--;
                }
                else{
                    right=height[r];
                    r--;
                }
            }
        }
        return ans;
    }
};
