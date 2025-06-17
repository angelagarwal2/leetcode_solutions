class Solution {
public:
    bool isPowerOfTwo(int n) {
      //return n > 0 && (n & (n - 1)) == 0;
      if(n==0||n<0)
      return false;
      if(n==1)
      return true;
      while(n>1)
      {
        if(n%2!=0)
        {
            return false;
        }
        n/=2;
      }
      return true;
    }
};