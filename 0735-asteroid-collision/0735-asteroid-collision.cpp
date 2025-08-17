class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
            while(!st.empty()&&abs(asteroids[i])>st.top()&&st.top()>0){
                st.pop();
            }
           if(!st.empty()&&abs(asteroids[i])==st.top())
           {
            st.pop();
           }
           else if(st.empty()||st.top()<0){
                st.push(asteroids[i]);
            }
            }
        }
        vector<int> res(st.size());
        for(int i=st.size()-1;i>=0;i--){
            res[i]=st.top();
            st.pop();
        }
        return res;
    }
};