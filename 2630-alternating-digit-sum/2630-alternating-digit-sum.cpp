class Solution {
public:
    int alternateDigitSum(int n) {
        int s=0;
        int s1=0;
        int c=0;
        while(n!=0){
            if(c%2==0){
                s+=n%10;
            }
            else{
                s1+=n%10;
            }
            n/=10;
            c++;
        }
        return (c%2==0)?(s1-s):(s-s1);
    }
};