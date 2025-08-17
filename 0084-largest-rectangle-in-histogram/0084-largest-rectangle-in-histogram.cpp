class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int ans=0;
        int n=heights.size();
        int ele,nse,pse;
        for(int i=0;i<n;i++){
            while(!st.empty()&&heights[i]<heights[st.top()]){
                ele=st.top();
                st.pop();
                nse=i;
                pse=st.empty()?-1:st.top();
                ans=max(ans,(heights[ele]*(nse-pse-1)));
            }
            st.push(i);
        }
        while(!st.empty()){
            nse=n;
            ele=st.top();
            st.pop();
            pse=st.empty()?-1:st.top();
            ans=max(ans,(heights[ele]*(nse-pse-1)));
        }
        return ans;
    }
};