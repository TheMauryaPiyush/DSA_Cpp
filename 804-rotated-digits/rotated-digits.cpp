class Solution {
public:

    bool isGood(int n){
        bool def = false;
        while(n>0){
            int digit = n%10;
            if(digit == 3 || digit == 4 || digit == 7) return false;
            else if(digit == 2 || digit == 5 || digit == 6 || digit == 9) def = true;
            n/=10;
        }
        return def;
    }

    int rotatedDigits(int n) {
        // int count=0;
        // for(int i=2;i<=n;i++){
        //     string s = to_string(i);
        //     if(s.find('3')!=string::npos || s.find('4')!=string::npos || s.find('7')!=string::npos){}
        //     else if(s.find('2')!=string::npos || s.find('5')!=string::npos || s.find('6')!=string::npos || s.find('9')!=string::npos) count++;
        // }
        // return count;

        int count = 0;
        for(int i=2;i<=n;i++){
            if(isGood(i)) count++;
        }
        return count;
    }
};