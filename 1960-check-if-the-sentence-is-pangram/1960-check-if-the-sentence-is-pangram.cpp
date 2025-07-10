class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> arr(26,0);
        int c=0;
        for(char &ch:sentence)
        {
            int ind=ch-'a';
            if(arr[ind]==0){
                arr[ind]++;
                c++;
            }
        }
        if(c==26)
        return true;
        return false;
    }
};