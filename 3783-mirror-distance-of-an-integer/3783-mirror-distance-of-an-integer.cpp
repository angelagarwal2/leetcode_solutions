class Solution {
public:
    int mirrorDistance(int n) {
        long long rev=0;
        int m=n;
        while(m>0){
            rev=rev*10+(m%10);
            m/=10;
        }
        return abs(n-rev);
    }
};