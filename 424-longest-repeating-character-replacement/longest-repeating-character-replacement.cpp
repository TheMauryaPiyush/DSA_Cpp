class Solution {
public:

    int find(vector<int> f){
        int m = 0;
        for(int i=0;i<256;i++){
            m = max(m,f[i]);
        }
        return m;
    }

    int characterReplacement(string s, int k) {
        long long n = s.size();
        long long low =0, res = INT_MIN;

        vector<int> f(256);
        
        for(long long high = 0;high<n;high++){
            f[s[high]]++;
            auto a = find(f)+k;
            while((high-low+1)>a){
                f[s[low]]--;
                low++;
            }
            res = max(res,(high-low+1));
        }
        return res;
    }
};