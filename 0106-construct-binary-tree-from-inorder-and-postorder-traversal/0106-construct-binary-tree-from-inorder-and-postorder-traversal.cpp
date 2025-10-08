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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()) return NULL;
        map<int,int> inMap;
        for(int i=0;i<inorder.size();i++){
            inMap[inorder[i]]=i;
        }
        TreeNode* root=buildTree(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,inMap);
        return root;
    }
    TreeNode* buildTree(vector<int>& postorder,int poststart,int postend,vector<int>& inorder,int instart,int inend,map<int,int>& inMap){
        if(poststart>postend||instart>inend) return NULL;
        TreeNode* root=new TreeNode(postorder[postend]);
        int inroot=inMap[root->val];
        int numsleft=inroot-instart;
        root->left=buildTree(postorder,poststart,poststart+numsleft-1,inorder,instart,inroot-1,inMap);
        root->right=buildTree(postorder,poststart+numsleft,postend-1,inorder,inroot+1,inend,inMap);
        return root;
    }
};