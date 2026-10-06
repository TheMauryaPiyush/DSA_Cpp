class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int> pos;
    vector<int> neg;
    int n=nums.size();
    for(int i=0; i<n;i++){
        if(nums[i]<0){
            neg.push_back(nums[i]);
        }
        else{
            pos.push_back(nums[i]);
        }
    }
    
    reverse(neg.begin(),neg.end());
    
    if(neg.size()==0){
        for(int i=0;i<pos.size();i++){
            pos[i]*=pos[i];
        }
        return pos;
    }
    if(pos.size()==0){
        for(int i=0;i<neg.size();i++){
            neg[i]*=neg[i];
        }
        return neg;
    }

    for(int i=0;i<neg.size();i++){
        neg[i]*=neg[i];
    }
    for(int i=0;i<pos.size();i++){
        pos[i]*=pos[i];
    }
    
    int i=0,j=0;
    vector<int> mm;
        while(i<pos.size() && j<neg.size()){
            if(pos[i]<=neg[j]){
                mm.push_back(pos[i]);
                i++;
            }
            else{
                mm.push_back(neg[j]);
                j++;
            }
        }
        while(i<pos.size()){
            mm.push_back(pos[i]);
            i++;
        }
        while(j<neg.size()){
            mm.push_back(neg[j]);
            j++;
        }
        return mm; 
    }
};