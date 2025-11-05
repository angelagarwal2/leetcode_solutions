/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int countNodes(TreeNode* root){
    if(!root) return 0;
    int ans=1+countNodes(root->left)+countNodes(root->right);
    return ans;
}
bool isCBT(TreeNode* root,int i,int cnt){
    if(!root) return true;
    if(i>=cnt) return false;
    else{
        bool left=isCBT(root->left,2*i+1,cnt);
        bool right=isCBT(root->right,2*i+2,cnt);
        return (left && right);
    }
}
    bool isCompleteTree(TreeNode* root) {
        int cnt=countNodes(root);
        int ind=0;
        return isCBT(root,ind,cnt);
    }
};