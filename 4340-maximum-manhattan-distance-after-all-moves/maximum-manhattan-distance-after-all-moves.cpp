class Solution {
public:
    int maxDistance(string moves) {
        int n = moves.size();
        int h = 0,v = 0,ans = 0;
        for(int i=0;i<n;i++){
            if(moves[i]=='U'){
                v++;
            }
            else if(moves[i]=='D'){
                v--;
            }
            else if(moves[i]=='R'){
                h++;
            }
            else if(moves[i]=='L'){
                h--;
            }
            else{
                ans++;
            }
        }
        ans+=abs(v) + abs(h);
        return ans;
    }
};