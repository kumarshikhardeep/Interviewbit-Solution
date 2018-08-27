/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//  int maxind(vector<int> A, int start, int end)
//  {
//      int max=A[start],index=start;
//      for(int i=start+1;i<=end;i++)
//      {
//          if(A[i]>max)
//          {
//             max=A[i];
//             index=i;
//          }
//      }
//      return index;
//  }
//  TreeNode * buildtree(vector<int> A, int start, int end)
//  {
//      if(start>end)
//         return NULL;
//     int i=maxind(A,start,end);
//     TreeNode *root = new TreeNode(A[i]);
//     if(start==end)
//         return root;
//     root->left= buildtree(A,start,i-1);
//     root->right=buildtree(A,i+1,end);
//     return root;
//  }
int find(vector<int>A,int start,int end)
{
    int max=start;
    for(int i=start+1;i<=end;i++)
    {
        if(A[max]<A[i])
            max=i;
    }
    return max;
}
TreeNode * buildtree(vector<int>&A, int start, int end)
{
    if(start>end)
        return NULL;
    int maxind=find(A,start,end);
    TreeNode * t=new TreeNode(A[maxind]);
    t->left=buildtree(A,start,maxind-1);
    t->right=buildtree(A,maxind+1,end);
    return t;
}
TreeNode* Solution::buildTree(vector<int> &A) {
    
    
    TreeNode * res=buildtree(A,0,A.size()-1);
    return res;
    
    
}
