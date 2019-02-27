/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int findmax(TreeNode *A,int &res)
 {
     if(A==NULL)
        return 0;
     int l=findmax(A->left, res);
     int r=findmax(A->right, res);
     int maxsingle=max(max(l,r)+A->val, A->val);
     int maxtop=max(maxsingle,l+r+A->val);
     res=max(res,maxtop);
     return maxsingle;
 }
int Solution::maxPathSum(TreeNode* A) {
    int res=INT_MIN;
    findmax(A,res);
    return res;
}
