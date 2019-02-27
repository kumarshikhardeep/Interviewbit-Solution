void gensubsets(vector<vector<int>> &res, vector<int> &cur, vector<int> A, int B, int ind)
{
    if(B==0)
    {
        res.push_back(cur);
        return;
    }
    if(ind==A.size() || B<0)
    {
        return;
    }
    cur.push_back(A[ind]);
    gensubsets(res,cur,A,B-A[ind],ind);
    cur.pop_back();
    gensubsets(res,cur,A,B,ind+1);
    return;
}


vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
   vector<vector<int>> res;
   vector<int> cur;
   vector<int> dup;
   sort(A.begin(),A.end());
   dup.push_back(A[0]);
   for(int i=1;i<A.size();i++)
   {
       if(A[i]!=dup[dup.size()-1])
           dup.push_back(A[i]);
   }
   gensubsets(res,cur,dup,B,0);
   return res;
}