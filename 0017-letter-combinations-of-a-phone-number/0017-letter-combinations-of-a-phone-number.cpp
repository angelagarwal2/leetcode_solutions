class Solution {
public:
void solve(string digits,vector<string>& ans,string output,int i,unordered_map<char, string>& mp){
    if (i == digits.length()) {
            ans.push_back(output);
            return;
        }
        string current_digit = mp[digits[i]];
        for (char ch : current_digit) {
            solve(digits, ans, output + ch, i + 1, mp);
        }
}
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> mp = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, 
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };
        if (digits.length() == 0) {
            return {};
        }
        vector<string> ans;
        string output="";
        int i=0;
        solve(digits,ans,output,i,mp);
        return ans;
    }
};