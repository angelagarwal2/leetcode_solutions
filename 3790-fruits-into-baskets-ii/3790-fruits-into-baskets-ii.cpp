class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans=0;
        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
            if(fruits[i]<=baskets[j])
            {
                baskets[j]=-1;
                ans++;
                break;
            }
            }
        }
        return fruits.size()-ans;
    }
};