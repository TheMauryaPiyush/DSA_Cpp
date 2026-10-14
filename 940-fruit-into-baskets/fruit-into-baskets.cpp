class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int low = 0;
        int res = 0;
        unordered_map<int,int> f;

        for(int high = 0;high<n;high++)
        {
            f[fruits[high]]++;
            while(f.size()>2)
            {
                f[fruits[low]]--;
                low++;
                if(f[fruits[low-1]]==0)
                {
                    f.erase(fruits[low-1]);
                }
            }
            if(f.size()<=2)
            {
                int len = high-low+1;
                res = max(res,len);
            }
        }
        return res;
    }
};