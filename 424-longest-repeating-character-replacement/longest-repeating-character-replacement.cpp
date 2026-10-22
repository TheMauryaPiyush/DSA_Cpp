class Solution {
public:

    int find(vector<int> f){
        int m = 0;
        for(int i=0;i<26;i++){
            m = max(m,f[i]);
        }
        return m;
    }

    int characterReplacement(string s, int k) {
        long long n = s.size();
        long long low =0, res = INT_MIN;

        vector<int> f(26,0);
        
        for(long long high = 0;high<n;high++){
            int alpha=s[high]-'A';
            f[alpha]++;
            auto a = find(f)+k;
            while((high-low+1)>a){
                f[s[low]-'A']--;
                low++;
            }
            res = max(res,(high-low+1));
        }
        return res;
    }
};