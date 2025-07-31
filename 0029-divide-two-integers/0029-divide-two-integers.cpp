class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
         if (dividend == INT_MIN && divisor == 1) return INT_MIN;
        if(dividend==divisor) return 1;
        bool sign=true;
        if((dividend>=0&&divisor<0)||(dividend<0&&divisor>0)) sign=false;
        long long n=abs((long long)dividend);
        long long d=abs((long long)divisor);
        int ans=0;
        while(n>=d){
            int c=0;
            while(n>=(d<<(c+1))){
                c++;
            }
            ans+=(1<<c);
            n=n-(d*(1<<c));
        }
        /* if(ans>=2e31&&sign==true)
        return INT_MAX;
        if(ans>=2e31&&sign==false)
        return INT_MIN; */
        return sign?ans:(-1*ans);
    }
};