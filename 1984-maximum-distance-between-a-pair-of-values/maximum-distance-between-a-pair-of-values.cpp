class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        int max_distance=0;
        int i=0,j=0;
        while(i<n && j<m){
            if(nums2[j]>=nums1[i]){
                max_distance=max(max_distance,(j-i));
                j++;
            }
            else{
                i++;
            }
        }
        return max_distance;
    }
};