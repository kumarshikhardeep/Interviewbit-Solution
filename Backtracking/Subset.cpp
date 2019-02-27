void generateSubsets(vector<vector<int> > &toreturn,vector<int> &curr,int ind,vector<int> A)
{
    if(ind == A.size())
    {
        toreturn.push_back(curr);
        return;
    }
    
    generateSubsets(toreturn,curr,ind+1,A);
    curr.push_back(A[ind]);
    generateSubsets(toreturn,curr,ind+1,A);
    curr.pop_back();
    return;
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int> > toreturn;
    sort(A.begin(),A.end());
    vector<int> curr;
    generateSubsets(toreturn,curr,0,A);
    sort(toreturn.begin(),toreturn.end());
    return toreturn;
}
