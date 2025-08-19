class Solution {
public:
bool static comp(vector<int>& p1,vector<int>& p2){
        return p1[1]<p2[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int c=1;
        int start=intervals[0][1];
        int n=intervals.size();
        for(int i=1;i<n;i++)
        {
            if(intervals[i][0]>=start){
                c+=1;
                start=intervals[i][1];
            }
        }
        return n-c;
    }
};