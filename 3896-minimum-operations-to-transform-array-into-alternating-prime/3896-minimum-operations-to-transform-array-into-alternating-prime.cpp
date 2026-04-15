class Solution {
public:
bool isprime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
    int minOperations(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int s=nums[i];
            if(i%2==0){
                while(!isprime(s)){
                    s++;
                    c++;
                }
            }
            else{
                while(isprime(s)){
                    s++;
                    c++;
                }
            }
        }
        return c;
    }
};