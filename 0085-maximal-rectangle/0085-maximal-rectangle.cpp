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
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int ans=INT_MIN;
        vector<vector<int>> prefix(n, vector<int>(m, 0));
        for(int j=0;j<m;j++){
            int s=0;
            for(int i=0;i<n;i++){
                if (matrix[i][j] == '1') s++;
                else s = 0;
                prefix[i][j]=s;
            }
        }
        for(int i=0;i<n;i++){
            ans=max(ans,largestRectangleArea(prefix[i]));
        }
        return ans;
    }
};