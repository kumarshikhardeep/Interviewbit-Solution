/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void insert(TreeNode *A,vector<int>&t)
 {
     if(!A)
        return;
     insert(A->left,t);
     t.push_back(A->val);
     insert(A->right,t);
 }
 bool find(int x,vector<int> &t,int start,int end)
 {
     if (end >= start)
   {
        int mid = (start+end)/2;
        if ( t[mid] == x)  
            return true;
        if (t[mid] > x) 
            return find(x,t, start, mid-1);
        else 
            return find(x,t, mid+1, end);
   }
   return false;
 }
int Solution::t2Sum(TreeNode* A, int B) {
    //unordered_map <int,int> umap;
    vector<int> t;
    insert(A,t);
   
    

    for(int j=0;j<t.size();j++)
    {

        if(B>t[j])
        {
            if(find((B-t[j]),t,j+1,t.size()-1))
                return 1;
        }
    }
    return 0;
}



