class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            int s=0;
            int c=0;
            for(int i:weights)
            {
                if(s+i<=mid)
                s+=i;
                else{
                    s=i;
                    c++;
                }
            }
            c++;
            if(c<=days) high=mid-1;
            else
            low=mid+1;
        }
        return low;
    }
};