class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int n = nums.size();
        int low=0,high=0,res=INT_MAX;

        // bool found = false;

        // int sum = nums[0];
        // while(high<n && low<=high){
        //     if(sum<target){
        //         high++;
        //         if(high>=n) break;
        //         sum+=nums[high];
        //     }
        //     else {
        //         res = min(res,(high-low+1));
        //         sum-=nums[low];
        //         low++;
        //         found = true;
        //     }
        // }
        // if(found) return res;
        // else return 0;


        int sum=0;
        while(high<nums.size()){
            sum+=nums[high];
            while(sum>=target){
                res = min(res,(high-low+1));
                sum-=nums[low++];
            }
            high++;
        }

        if(res==INT_MAX) return 0;
        else return res;
    }
};