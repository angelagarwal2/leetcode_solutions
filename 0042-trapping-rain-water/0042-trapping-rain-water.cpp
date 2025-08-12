class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int lMax=0,rMax=0,total=0,l=0,r=n-1;
        while(l<r){
            if(height[l]<=height[r]){
                if(lMax>height[l]){
                    total+=lMax-height[l];
                }
                else{
                    lMax=height[l];
                }
                l=l+1;
            }
            else{
                if(rMax>height[r]){
                    total+=rMax-height[r];
                }
                else{
                    rMax=height[r];
                }
                r=r-1;
            }
        }
        return total;
    }
};

//TC:o(n);
//SC:o(1)