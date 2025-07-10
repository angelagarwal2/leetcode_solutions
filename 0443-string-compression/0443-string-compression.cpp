class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int index=0;
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(chars[i]==chars[i-1])
            {
                c++;
            }
            else{
                chars[index]=chars[i-1];
                index++;
                if(c>1)
                { string cs=to_string(c);
                for(char &ch:cs)
                    {chars[index]=ch;
                    index++;}}
                c=1;
            }
        }
        chars[index]=chars[n-1];
        index++;
        if(c>1)
                { string cs=to_string(c);
                for(char &ch:cs)
                    {chars[index]=ch;
                    index++;}}
        return index;
    }
};