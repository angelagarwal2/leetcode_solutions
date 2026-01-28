class Solution {
public:
int partition(vector<int>& nums,int l,int r){
    int pivot=nums[r];
    int i=l;
    for(int j=l;j<r;j++){
        if(nums[j]<=pivot){
            swap(nums[i],nums[j]);
            i++;
        }
    }
    swap(nums[i],nums[r]);
    return i;
}
void quick(vector<int>& nums,int l,int r){
    if (l < r) {
        int p = partition(nums, l, r);
        quick(nums, l, p - 1);
        quick(nums, p + 1, r);
    }
}
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        quick(nums,0,n-1);
        vector<int> temp(nums);
    int mid=(n-1)/2;
    int high=n-1;
    for(int i=0;i<n;i++) {
        if(i%2==0)
            nums[i]=temp[mid--];
        else
            nums[i]=temp[high--];
    }
    }
};