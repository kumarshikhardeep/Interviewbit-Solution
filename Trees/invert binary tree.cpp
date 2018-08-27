/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void invert(TreeNode *a)
 {
     if(!a)
        return;
   
     
     invert(a->left);
     invert(a->right);
     TreeNode* t=a->left;
     a->left=a->right;
     a->right=t;
    
 }
TreeNode* Solution::invertTree(TreeNode* A) {
    invert(A);
    return A;
}
