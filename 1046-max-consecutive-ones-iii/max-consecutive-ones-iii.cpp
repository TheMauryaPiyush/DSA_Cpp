class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int low=0;
        int res=0;
        int a = 0;

        vector<int> f(2,0);

        for(int high=0;high<n;high++){
            f[nums[high]]++;
            int len = high-low+1;
            a = f[1];
            while(len>a+k){
                f[nums[low]]--;
                low++;
                len = high-low+1;
            }
            res = max(res,len);
        }
        return res;
    }
};