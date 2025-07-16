class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        /* int m=s.length();
        int n=words.size();
        map<char,vector<int>> mp;
        for(int i=0;i<m;i++){
            mp[s[i]].push_back(i);
        }
        int j=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            string w=words[i];
            int prev=-1;
            for(j=0;j<w.length();j++)
            {
                char ch=w[j];
                if(mp.find(ch)==mp.end())
                break;
                vector<int> indices=mp[ch];
                auto it=upper_bound(begin(indices),end(indices),prev);
                if(it==indices.end())
                break;
                prev=*it;
            }
            if(j==w.length())
            c++;
        }
        return c; */

        int count=0;
        unordered_map<string,int>mpp;
        for(int j=0;j<words.size();j++){
            int ind=0;
            if(mpp.find(words[j])!=mpp.end()){
                count+=mpp[words[j]];
                continue;
            }
            for(int i=0;i<s.size();i++) {
                if(words[j][ind]==s[i]){
                    ind++;
                }
                if(ind==words[j].size()) {
                    mpp[words[j]]=1;
                    count++;
                    break;
                }
            }
            if(ind!=words[j].size()) {
                mpp[words[j]]=0;
            }
        }
        return count;
    }
};