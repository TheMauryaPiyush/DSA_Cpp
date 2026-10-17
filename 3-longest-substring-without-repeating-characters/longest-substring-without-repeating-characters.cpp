class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_map<int,int> f;
        int low=0;
        int res=0;

        for(int high=0;high<n;high++)
        {
            f[s[high]]++;
            while(f[s[high]]>1)
            {
                f[s[low]]--;
                low++;
            }
            if(f[s[high]]==1)
            {
                int len = high - low + 1;
                res = max(res,len);
            }
        }
        return res;
    }
};