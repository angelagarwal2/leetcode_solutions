class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev,curr;
        for(int i = 0; i<=rowIndex; i++){
            curr={};
            for(int j = 0; j<=i; j++){
                if(j==0||j==i) curr.push_back(1);
                else
                curr.push_back(prev[j-1] + prev[j]);
            }
            prev=curr;
        }
        return curr;
    }
};