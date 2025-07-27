class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int c=0;
        bool flag=true;  //true increasing and false decreasing
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1])
            continue;
            else if(nums[i+1]>nums[i])
            {flag=true;
            break;}
            else{
                flag=false;
                break;
            }
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]&&flag==true)
            {c++;
            flag=false;}
            else if(nums[i+1]>nums[i]&&flag==false){
                c++;
                flag=true;
            }
            else continue;
        }
        return c;
    }
};