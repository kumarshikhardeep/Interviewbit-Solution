/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void path(vector<vector<int>> &res, vector<int> temp, TreeNode *A, int B, int subsum)
 {
    
        subsum+=A->val;
        temp.push_back(A->val);
        if(subsum==B && A->left==NULL && A->right==NULL)
        {
            res.push_back(temp);
            
        }
        if(A->left)
        {
           path(res, temp, A->left,B, subsum);
        }
        if(A->right)
        {
           path(res, temp, A->right,B, subsum);
        }
        temp.pop_back();
        
    
    
 }
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> res;
    vector<int>temp;
    if(A==NULL)
        return res;
    path(res,temp,A,B,0);
   
    return res;
}
