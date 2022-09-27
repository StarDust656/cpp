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
    vector<int> rightView;
    vector<int> rightSideView(TreeNode* root) {
        
        if(root==NULL)
            return rightView;
        
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int s=q.size();
            
            for(int i=0;i<s;i++){
                TreeNode* a=q.front();
                q.pop();
                
                if(i==s-1){
                    rightView.push_back(a->val);
                    
                }
                
                if(a->left){
                    q.push(a->left);
                    
                }
                if(a->right)
                    q.push(a->right);
            }
        }
        return rightView;
    }
};