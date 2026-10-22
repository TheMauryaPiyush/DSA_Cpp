class Solution {
public:

    // int find(vector<int> f){
    //     int m = 0;
    //     for(int i=0;i<26;i++){
    //         m = max(m,f[i]);
    //     }
    //     return m;
    // }

    int characterReplacement(string s, int k) {
        int n = s.size();
        int low =0, res = INT_MIN;
        int a = 0;

        vector<int> f(26,0);
        
        for(int high = 0;high<n;high++){
            int alpha=s[high]-'A';
            f[alpha]++;
            a = max(a,f[alpha]);
            int len = high-low+1;
            while(len>a+k){
                int beta = s[low]-'A';
                f[beta]--;
                low++;
                len = high-low+1;
            }
            res = max(res,len);
        }
        return res;
    }
};