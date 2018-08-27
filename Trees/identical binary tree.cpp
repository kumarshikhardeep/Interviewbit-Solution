/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL && B==NULL)
        return 1;
   /* if(A==NULL || B==NULL)
        return 0;
    queue<TreeNode *> q1;
    queue<TreeNode *> q2;
    q1.push(A);
    q2.push(B);
    while(!q1.empty() && !q2.empty())
    {
        TreeNode * n1=q1.front();
        TreeNode * n2=q2.front();
        if(n1->val != n2->val)
            return 0;
        q1.pop();
        q2.pop();
        if(A->left && B->left)
        {
            q1.push(A->left);
            q2.push(B->left);
        }
        else if(A->left || A->left)
            return 0;
        if(A->right && B->right)
        {
            q1.push(A->right);
            q2.push(B->right);
        }
        else if(A->right || B->right)
            return 0;
    }
    return 1; */
    if(A!=NULL && B!=NULL)
    {
        return (A->val == B->val &&
            isSameTree(A->left, B->left) &&
            isSameTree(A->right, B->right));
    }
    return 0;
}
