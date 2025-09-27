/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    void markParents(TreeNode* root,unordered_map<TreeNode*,TreeNode*>& pt,TreeNode* target){
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            if(curr->left){
                pt[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right){
                pt[curr->right]=curr;
                q.push(curr->right);
            }
        }
    }
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*> pt;
        markParents(root,pt,target);
        unordered_map<TreeNode*,bool> visited;
        queue<TreeNode*> q;
        q.push(target);
        visited[target]=true;
        int curr_l=0;
        while(!q.empty()){
            int size=q.size();
            if(curr_l++ ==k) break;
            for(int i=0;i<size;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left&&!visited[curr->left]){
                    q.push(curr->left);
                    visited[curr->left]=true;
                }
                if(curr->right&&!visited[curr->right]){
                    q.push(curr->right);
                    visited[curr->right]=true;
                }
                if(pt[curr]&& !visited[pt[curr]]){
                    q.push(pt[curr]);
                    visited[pt[curr]]=true;
                }
            }
        }
        vector<int> res;
        while(!q.empty()){
            TreeNode* curr=q.front();
            q.pop();
            res.push_back(curr->val);
        }
        return res;
    }
};