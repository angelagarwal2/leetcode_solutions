class Solution {
public:
bool hasZero(int n){
    while(n>0){
        int d=n%10;
        if(d==0) return true;
        n=n/10;
    }
    return false;
}
    vector<int> getNoZeroIntegers(int n) {
        int a=1;
        while(n>a){
            int b=n-a;
            if(!hasZero(a)&&!hasZero(b))
            {
                return {a,b};
            }
            else
            a++;
        }
        return {0,0};
    }
};