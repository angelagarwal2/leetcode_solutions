class Solution {
public:
bool checkFreq(string& s)
{
    int arr[26]={0};
    for(char& ch:s)
    {
        arr[ch-'a']++;
        if(arr[ch-'a']>1)
        return true;
    }
    return false;
}
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length())
        return false;
        if(s==goal)
        {
            return checkFreq(s);
        }
        vector<int> ind;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=goal[i])
            ind.push_back(i);
        }
        if(ind.size()!=2)
        return false;
        swap(s[ind[0]],s[ind[1]]);
        return s==goal;
    }
};