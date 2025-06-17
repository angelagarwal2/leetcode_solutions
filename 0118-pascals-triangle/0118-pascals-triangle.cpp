class Solution {
public:
/*vector<int> row(int r)
{
    vector<int> v;
    long long ans =1;
    v.push_back(1);
    for(int i=1;i<r;i++)
    {
       ans = ans * (r - i);
       ans = ans / i;
        v.push_back(ans);
    }
    return v;
}*/
    vector<vector<int>> generate(int numRows) {
        /*vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++)
        {
            ans.push_back(row(i));
        }
        return ans;*/
        vector <vector <int>> res;
        vector <int> temp;
        temp.reserve(numRows);
        for(int i = 0; i<numRows; i++){
            temp.push_back(1);
            for(int j = 1; j<i; j++){
                temp[j] = res[i-1][j-1] + res[i-1][j];
            }
            res.push_back(temp);
        }
        return res;
    }
};