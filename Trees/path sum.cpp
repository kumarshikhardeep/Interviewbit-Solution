/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* A, int B) {
    if(A==NULL)
        return 0;
    else
    {
        bool ans=0;
        int subsum=B-A->val;
        if(subsum==0 && A->left==NULL && A->right==NULL)
        {
            return 1;
        }
        if(A->left)
        {
            ans=ans||hasPathSum(A->left, subsum);
        }
        if(A->right)
        {
            ans=ans||hasPathSum(A->right, subsum);
        }
    if(ans)
        return 1;
    else
        return 0;
    }
}
