using ll = long long;
const int MOD = 1e9+7;
class Solution {
public:
long long sumSubarrayMins(vector<int>& arr) {
        vector<int> nse(findnse(arr));
        vector<int> psee(findpsee(arr));
        long long  total = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            long long  left = i - psee[i];
            long long  right = nse[i] - i;
            total = (total + (left * right * 1LL * arr[i]));
        }
        return total;
    }

    vector<int> findnse(vector<int>& arr) {
        stack<int> st;
        vector<int> nse(arr.size());

        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i])
                st.pop();
            nse[i] = st.empty() ? arr.size() : st.top();
            st.push(i);
        }
        return nse;
    }

    vector<int> findpsee(vector<int>& arr) {
        stack<int> st;
        vector<int> psee(arr.size());

        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && arr[st.top()] > arr[i])
                st.pop();
            psee[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return psee;
    }
long long sumSubarrayMaxs(vector<int>& arr) {
        vector<int> nge(findnge(arr));
        vector<int> pgee(findpgee(arr));
        long long  total = 0;
        for (int i = 0; i < arr.size(); i++) {
            long long left = i - pgee[i];
            long long  right = nge[i] - i;
            total = (total + (left * right * 1LL * arr[i]));
        }
        return total;
    }

    vector<int> findnge(vector<int>& arr) {
        stack<int> st;
        vector<int> nge(arr.size());
        for (int i = arr.size() - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i])
                st.pop(); 
            nge[i] = st.empty() ? arr.size() : st.top();
            st.push(i);
        }
        return nge;
    }

    vector<int> findpgee(vector<int>& arr) {
        stack<int> st;
        vector<int> pgee(arr.size());
        for (int i = 0; i < arr.size(); i++) {
            while (!st.empty() && arr[st.top()] < arr[i])
                st.pop();
            pgee[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pgee;
    }
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMaxs(nums)-sumSubarrayMins(nums);
    }
};