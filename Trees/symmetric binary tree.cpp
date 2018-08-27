/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 bool mirror(TreeNode *n1, TreeNode *n2)
 {
    if(!n1 && !n2)
        return true;
    if(n1 && n2 && n1->val==n2->val)
    {
        return (mirror(n1->left, n2->right) && mirror(n1->right, n2->left));
    }
    return false;
 }
int Solution::isSymmetric(TreeNode* A) {
   
    TreeNode *n1=A;
    TreeNode *n2=A;
    if(mirror(n1,n2))
        return 1;
    else
        return 0;
}
