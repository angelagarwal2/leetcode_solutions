class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum=0;
        int rsum=0;
        int sum=0;
        for(int i=0;i<k;i++) //o(k)
        {
            lsum=lsum+cardPoints[i];
            sum=lsum;
        }
        int right=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){ //o(k)
            lsum=lsum-cardPoints[i];
            rsum=rsum+cardPoints[right];
            right--;
            sum=max(sum,lsum+rsum);
        }
        return sum;
    }
};

//TC:o(2k)
//SC:o(1)