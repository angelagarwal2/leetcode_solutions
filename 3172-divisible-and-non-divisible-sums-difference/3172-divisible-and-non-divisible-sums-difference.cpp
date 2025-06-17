class Solution {
public:
    int differenceOfSums(int n, int m) {
        /*int num1=0;
        int num2=0;
        while(n!=0)
        {
            if(n%m!=0)
            num1+=n;
            else
            num2+=n;
            n--;
        }
        return num1-num2;*/
        int totsum=n*(n+1)/2;
        int divsum=m*(n/m)*(n/m+1);
        return totsum-divsum;
    }
};