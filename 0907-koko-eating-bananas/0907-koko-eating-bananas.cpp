class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=high;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            long hr=0;
            for(int i:piles)
            {
                hr+=(i+mid-1)/mid;
            }
            if(hr<=h) {
                ans=mid;
                high=mid-1;}
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};