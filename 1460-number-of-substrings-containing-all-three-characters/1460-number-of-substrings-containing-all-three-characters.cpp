class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastSeen[3]={-1,-1,-1};
        int c=0;
        for(int i=0;i<s.length();i++){
            lastSeen[s[i]-'a']=i;
            if(lastSeen[0]!=-1&&lastSeen[1]!=-1&&lastSeen[2]!=-1){
                c=c+1+min({lastSeen[0],lastSeen[1],lastSeen[2]});
            }
        }
        return c;
    }
};