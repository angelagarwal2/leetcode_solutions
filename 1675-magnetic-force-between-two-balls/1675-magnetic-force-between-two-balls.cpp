class Solution {
public:
    bool canPut(vector<int>& position,int mid,int m)
    {
        int balls=1;
        int lastPos=position[0];
        for(int i=0;i<position.size();i++)
        {
            if(position[i]-lastPos>=mid)
            {
                balls++;
                lastPos=position[i];
            }
        }
        return balls>=m;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int low=1;
        int high=position.back()-position.front();
        int ans=0;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            if(canPut(position,mid,m))
            {
                low=mid+1;
                ans=mid;
            }
            else
            high=mid-1;
        }
        return ans;
    }
};