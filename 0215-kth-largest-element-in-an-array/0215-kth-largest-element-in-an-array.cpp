class Solution {
public:
int partition(vector<int>& nums,int l,int r){
    int pivot=nums[r];
    int i=l;
    for(int j=l;j<r;j++){
        if(nums[j]>pivot){
            swap(nums[i],nums[j]);
            i++;
        }
    }
    swap(nums[i],nums[r]);
    return i;
}
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        k=k-1;
        int l=0,r=n-1;
        while(l<=r){
        int p=partition(nums,l,r);
        if(p==k) return nums[p];
        else if(p>k) r=p-1;
        else l=p+1;
        }
        return -1;
    }
};