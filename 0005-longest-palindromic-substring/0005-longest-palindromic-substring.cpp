class Solution {
public:
int expandAroundCenter(string s,int left,int right)
{
    while(left>=0&&right<s.length()&&s[left]==s[right])
    {
        left--;
        right++;
    }
    return right-left-1;
}
    string longestPalindrome(string s) {
        int start=0;
        int end=0;
        for(int i=0;i<s.length();i++)
        {
            int l1=expandAroundCenter(s,i,i);
            int l2=expandAroundCenter(s,i,i+1);
            int l=max(l1,l2);
            if(l>end-start)
            {
                start=i-(l-1)/2;
                end=i+l/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};