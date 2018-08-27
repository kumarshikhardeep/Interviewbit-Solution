/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

//  void getdis(map<int,vector<int>> &res,int hd,TreeNode *A,vector<int> t)
//  {
//     if(A==NULL)
//         return;
//     if(res.find(hd)!=res.end())
//         res[hd].push_back(A->val);
//     else
//     {
//         t.push_back(A->val);
//         res.insert(make_pair(hd,t));
//         t.clear();
//     }
//     getdis(res,hd-1,A->left,t);
//     getdis(res,hd+1,A->right,t);
//  }
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    int hd=0;
    vector<vector<int>> r;
    map <int,vector<int>> res;
    queue<pair<TreeNode*,int>> Q;
    if(A==NULL) return r;
    Q.push(make_pair(A,0));
    while(!Q.empty())
    {
        TreeNode *node=Q.front().first;
        int l=Q.front().second;
        Q.pop();
        if(res.find(l)!=res.end())
        {
            res[l].push_back(node->val);
        }
        else
        {
          vector<int>t;   
          t.push_back(node->val);
          res.insert(make_pair(l,t));
        }
        if(node->left!=NULL)
        {
            Q.push(make_pair(node->left,l-1));
        }
        if(node->right!=NULL)
        {
            Q.push(make_pair(node->right,l+1));
        }
    }
    //getdis(res,hd,A,t);
   // sort(res.begin(),res.end(),comp);
    for (auto it=res.begin(); it!=res.end(); it++)
    {
        r.push_back(it->second);

    }
return r;    
}
