class Solution {
public:
    bool isHappy(int n) {
        if(n==1||n==7)
        return true;
        else if(n<10)
        return false;
        else{
        int r=0;
        while(n>0)
        {
            int d=n%10;
            r=r+(d*d);
            n=n/10;
        }
        return isHappy(r);
        }
    }
};