class Solution {
public:
    int mySqrt(int x) {
        //return sqrt(x);
        int low=1;
        int high=x;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            if(mid==x/mid) return mid;
            else if(mid>x/mid){
                high=mid-1;}
            else{
                low=mid+1;
            }
        }
        return high;
    }
};