class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size()-1;
        
        int low=0;
        int mid=0;
        int high=n;
        
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;mid++;   
            }
            else if(nums[mid]==1) 
            {
                mid++;
            }
            else
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<nums[i];
        } 
    }
};