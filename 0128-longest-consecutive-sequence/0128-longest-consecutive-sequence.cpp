class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int longest=1;
        unordered_set<int> st;
        for(auto i:nums)
        {
            st.insert(i);
        }
        for(auto i:st)
        {
            if(st.find(i-1)==st.end())
            {
                int c=1;
                int a=i;
                while(st.find(a+1)!=st.end())
                {
                    c+=1;
                    a+=1;
                }
                longest=max(longest,c);
            }
        }
        return longest;
    }
};