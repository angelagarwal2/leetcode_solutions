class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int len = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
         int minDif = 2e6; 
         for(int i = 0; i < len - 1; ++i) {
            int dif = arr[i+1] - arr[i];
            if(dif < minDif) {
                minDif = dif;
                ans.clear();
                ans.push_back({arr[i], arr[i+1]});
            }
             else if(dif == minDif) {
                ans.push_back({arr[i], arr[i+1]});
            }
         }
         return ans;
    }
};