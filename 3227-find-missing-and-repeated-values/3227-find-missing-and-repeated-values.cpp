class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
          int n = grid.size();
          long long N=n*n;
          long long sn=(N*(N+1))/2;    //sum upto N
          long long s2n=(N*(N+1)*((2*N)+1))/6;  //sum of squares upto N
          long long s=0;
          long long s2=0;
          for(int i=0;i<n;i++)
          {
            for(int j=0;j<n;j++)
            {
                s+=grid[i][j];
                s2+=(long long)grid[i][j]*(long long)grid[i][j];
            }
          }
          long long val1=s-sn;  //x-y
          long long val2=s2-s2n;   //x2-y2
          long long val3=val2/val1;   //x+y
          long long x=(val1+val3)/2;    //x:repeating
          long long y=x-val1;    //y:missing
          return {(int)x,(int)y};
    }
};