class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(char i:s)
        {
            mp[i]++;
        }
        priority_queue<pair<int,char>> mh;
        for(auto& [ch,count]:mp)
        {
            mh.push({count,ch});
        }
        string res="";
        while(!mh.empty())
        {
            auto [count,ch]=mh.top();
            mh.pop();
            res+=string(count,ch);
        }
        return res;
    }
};