class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0;
        int n=letters.size();
        int high=n-1;
        int pos=-1;
        while(low<=high)
        {
            int mid=low+((high-low)/2);
            if(letters[mid]>target){
                pos=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return (pos==-1)?letters[0]:letters[pos];
    }
};