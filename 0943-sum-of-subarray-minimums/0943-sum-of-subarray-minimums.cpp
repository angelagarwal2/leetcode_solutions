using ll = long long;
const int MOD = 1e9+7;
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int l=arr.size();
        vector<int> left(l,-1);
        vector<int> right(l,l);
        stack<int> st;
        for(int i=0;i<l;i++){
            while(!st.empty()&&arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(!st.empty()){
                left[i]=st.top();
            }
            st.push(i);
        }
        st=stack<int>();
        for(int i=l-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]>arr[i]){
                st.pop();
            }
            if(!st.empty()){
                right[i]=st.top();
            }
            st.push(i);
        }
        ll s=0;
        for(int i=0;i<l;i++){
            s+=static_cast<ll>(i-left[i])*(right[i]-i)*arr[i]%MOD;
            s%=MOD;
        }
        return s;
    }
};