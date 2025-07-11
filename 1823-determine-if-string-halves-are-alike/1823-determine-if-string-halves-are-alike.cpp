class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n=s.length();
        int mid=n/2;
        int i=0;
        int j=mid;
        int c=0;
        while(i<mid&&j<n)
        {
            if(vowels.count(s[i])) c++;
            if(vowels.count(s[j])) c--;
            i++;
            j++;
        }
        return c==0;
    }
};