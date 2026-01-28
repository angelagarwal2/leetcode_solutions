class Solution {
public:
int partition(vector<pair<int,int>>& nums,int l,int r){
    int pivot=nums[r].second;
    int i=l;
    for(int j=l;j<r;j++){
        if(nums[j].second>pivot){
            swap(nums[i],nums[j]);
            i++;
        }
    }
    swap(nums[i],nums[r]);
    return i;
}
void quick(vector<pair<int,int>>& nums,int l,int r){
    if(l<=r){
        int p=partition(nums,l,r);
        quick(nums,l,p-1);
        quick(nums,p+1,r);
    }
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> freq;
         for (int x : nums)
            freq[x]++;
        vector<pair<int,int>> v;
        for (auto &p : freq)
            v.push_back({p.first, p.second});

         quick(v,0,v.size()-1);
        vector<int> ans;
        for (int i = 0; i < k; i++)
            ans.push_back(v[i].first);
        return ans;
    }
};