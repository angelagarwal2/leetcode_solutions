class Solution {
public:
    int cntone(vector<int> row,int n)
    {
        sort(row.begin(),row.end());
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            if(row[mid]==0)
            low=mid+1;
            else
            high=mid-1;
        }
        return n-low;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max1=0;
        int index=0;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            int ones=cntone(mat[i],m);
            if(ones>max1)
            {max1=ones;
            index=i;}
        }
        return {index,max1};
    }
};