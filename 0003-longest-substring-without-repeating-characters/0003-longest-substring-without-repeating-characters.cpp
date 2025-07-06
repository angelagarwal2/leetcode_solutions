class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxlen=0;
        vector<int> charIndex(128,-1);
        int left=0;
        for(int i=0;i<n;i++)
        {
            if(charIndex[s[i]]>=left)
            {
                left=charIndex[s[i]]+1;
            }
            charIndex[s[i]]=i;
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
};