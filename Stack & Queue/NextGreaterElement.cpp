class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;

        int x=nums1.size();
        int y=nums2.size();

        for (int i=0; i<y; i++){
            m[nums2[i]]=i;
        }

        for (int i=0; i<x; i++){
            int index=m[nums1[i]] + 1;
            while (index<y && nums2[index]<=nums1[i]){
                index++;
            }
            if (index==y) nums1[i]=-1;
            else nums1[i]=nums2[index];
        }

        return nums1;
    }
};
