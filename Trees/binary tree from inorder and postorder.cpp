/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 /*
  int search(int start, int end, vector<int>A, int val)
 {
     int i;
     for( i=start;i<=end;i++)
     {
         if(A[i]==val)
            break;
     }
     return i;
 }
 TreeNode * buildtree(vector<int>A, vector<int>B,int start, int end, int *p)
 {
     if(start>end)
        return NULL;
     TreeNode * root=new TreeNode(B[*p]);
     (*p)--;
     if(start==end)
        return root;
     int i=search(start,end,A,root->val);
     root->left=buildtree(A,B,start,i-1,p);
     root->right=buildtree(A,B,i+1,end,p);
     return root;
 }
*/

int findIndex(vector<int>& inorder, int i, int j, int val)
{
    for (auto b = i; b<=j; ++b)
        if (inorder[b] == val)
            return b;
}

TreeNode* makeTree(vector<int> &inorder, vector<int> &postorder, int i, int j, int& p)
{
    if (i>j)
        return NULL;
    TreeNode* node = new TreeNode(postorder[p--]);
    
    int in = findIndex(inorder, i, j, node->val);
    node->right = makeTree(inorder, postorder, in+1, j, p);
    node->left = makeTree(inorder, postorder, i, in-1, p);
    return node;
}

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int p=A.size()-1;
    TreeNode * res=makeTree(A,B,0,A.size()-1,p);
  //  TreeNode * t=preord(res);
    return res;
}
