class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int oddCount=0;
        for(char i:s)
        {
            mp[i]++;
            if(mp[i]%2==1)
            oddCount++;
            else
            oddCount--;
        }
        if(oddCount>1) return s.length()-oddCount+1;
        else return s.length();
    }
};