class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int n=bloomDay.size();
        int ans=high;
        if(((long long)m*k)>n) return -1;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            int c=0;
            int b=0;
            for(int i=0;i<n;i++)
            {
                if(bloomDay[i]<=mid)
                {c++;
                if(c==k)
                {b++;
                c=0;}}
                else
                {
                    c=0;
                }
            }
            if(b>=m){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};