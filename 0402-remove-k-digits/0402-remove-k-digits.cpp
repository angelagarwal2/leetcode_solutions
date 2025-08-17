class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string s="";
        for(int i=0;i<num.length();i++){
            while(!st.empty()&&k!=0&&(num[i]-'0')<(st.top()-'0')){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }
        if(st.empty())
        return "0";
        while(!st.empty()){
            s+=st.top();
            st.pop();
        }
        while(s.size()!=0&&s.back()=='0'){
            s.pop_back();
        }
        reverse(s.begin(),s.end());
        if(s.empty())
        return "0";
        return s;
    }
};