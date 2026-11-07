class Solution {
public:
    bool sahi(vector<int> a, vector<int> b){
        for(int i=0;i<256;i++){
            if(a[i]<b[i]){
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();
        vector<int> got(256,0);
        vector<int> left(256,0);

        int low = 0;
        int res = INT_MAX;
        int start = low;

        for(int i=0;i<n;i++){
            left[t[i]]++;
        }

        for(int high = 0;high < m;high++){
            got[s[high]]++;
            while(sahi(got,left)){
                int len = high-low+1;
                if(res > len){
                    res = len;
                    start = low;
                }
                got[s[low]]--;
                low++;
            }
        }
        if(res==INT_MAX) res=0;
        return s.substr(start,res);
    }
};