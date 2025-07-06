class Solution {
public:
int mod=1000000007;
long long powerExp(long long a,long long b)
{
    long long res=1;
    while(b)
    {
        if(b%2==1)
        {
            res=(res*a)%mod;
            b=b-1;
        }
        else{
        a=(a*a)%mod;
        b/=2;
        }
    }
    return res;
}
    int countGoodNumbers(long long n) {
        return (powerExp(4,n/2)*powerExp(5,n-n/2))%mod;
    }
};