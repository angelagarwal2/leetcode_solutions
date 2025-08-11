class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        unordered_map<int,int> mpp;
        stack<int> st;
        for(int i=nums2.size()-1;i>=0;--i){
            while(!st.empty()&&st.top()<=nums2[i]){
                st.pop();
            }
            mpp[nums2[i]]=st.empty()?-1:st.top();
            st.push(nums2[i]);
        }
        vector<int> ans;
        for(int i:nums1){
            ans.push_back(mpp[i]);
        }
        return ans;
    }
};