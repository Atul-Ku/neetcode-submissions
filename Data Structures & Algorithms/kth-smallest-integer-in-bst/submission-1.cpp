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
    int ans;
    int cnt;
    void ksmall(TreeNode* root, int k){
        if(root==nullptr) return ;
        ksmall(root->left, k);
        cnt++;
        if(cnt==k){
            ans=root->val;
            return ;
        }
        ksmall(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        cnt=0;
        ksmall(root, k);
        return ans;
    }
};
