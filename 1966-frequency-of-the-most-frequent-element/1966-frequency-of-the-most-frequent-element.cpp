class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());  
        int maxFreq = 1; 
        long left = 0;
        long long sum = 0; 
        for (long right = 0; right < nums.size(); right++) {
            sum += nums[right]; 
            while ((right - left + 1) * nums[right] - sum > k) {
                sum -= nums[left];  
                left++;  
            }
            int freq = right - left + 1;
            maxFreq = max(maxFreq, freq);
        }
        return maxFreq; 
    }
};