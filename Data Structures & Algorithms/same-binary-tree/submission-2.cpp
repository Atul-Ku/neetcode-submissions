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
    vector<vector<int>> levelOrder(TreeNode* root){
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        vector<int> v;
        v.push_back(root->val);
        while(q.size()>1){
            TreeNode* t=q.front();
            q.pop();
            if(t==nullptr){
                ans.push_back(v);
                v.clear();
                q.push(nullptr);
            }
            else{
                if(t->left!=nullptr){
                    v.push_back(t->left->val);
                    q.push(t->left);
                }
                if(t->left==nullptr){
                    v.push_back(-101);
                }
                if(t->right!=nullptr){
                    v.push_back(t->right->val);
                    q.push(t->right);
                }
                if(t->right==nullptr){
                    v.push_back(-101);
                }
            }
        }
        ans.push_back(v);

        return ans;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==q) return true;
        if((p==nullptr && q!=nullptr) || (p!=nullptr && q==nullptr)) return false;

        // return ((p->left==q->left) && (p->right==q->right));
        vector<vector<int>> p_vec = levelOrder(p);
        vector<vector<int>> q_vec = levelOrder(q);
        for(int i=0;i<p_vec.size();i++){
            for(int j=0;j<p_vec[i].size();j++){
                cout<<p_vec[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<q_vec.size();i++){
            for(int j=0;j<q_vec[i].size();j++){
                cout<<q_vec[i][j]<<" ";
            }
            cout<<endl;
        }
        return p_vec==q_vec;
    }
};
