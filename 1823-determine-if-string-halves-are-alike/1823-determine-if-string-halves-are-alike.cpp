class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int n=s.length();
        int mid=n/2;
        int i=0;
        int j=mid;
        int cl=0;
        int cr=0;
        while(i<mid&&j<n)
        {
            if(vowels.count(s[i])) cl++;
            if(vowels.count(s[j])) cr++;
            i++;
            j++;
        }
        if(cl==cr) return true;
        return false;
    }
};