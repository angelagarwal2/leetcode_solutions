class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
          long long sn=((long long)n*(n+1))/2;    //sum upto n
          long long s2n=((long long)n*(n+1)*((2*n)+1))/6;  //sum of squares upto n
          long long s=0;
          long long s2=0;
          for(int i=0;i<n;i++)
          {
                s+=nums[i];
                s2+=(long long)nums[i]*(long long)nums[i];
          }
          long long val1=s-sn;  //x-y
          long long val2=s2-s2n;   //x2-y2
          long long val3=val2/val1;   //x+y
         long long x=(val1+val3)/2;    //x:repeating
          long long y=x-val1;    //y:missing
          return {(int)x,(int)y};
    }
};