void generateSubsets(vector<vector<int> > &toreturn,vector<int> &curr,int ind,vector<int> p)
{
    if(ind == p.size())
    {
        toreturn.push_back(curr);
        return;
    }
    
    generateSubsets(toreturn,curr,ind+1,p);
    curr.push_back(p[ind]);
    generateSubsets(toreturn,curr,ind+1,p);
    curr.pop_back();
    return;
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<int> p;
    for(int i=1;i<=A;i++)
        p.push_back(i);
    vector<vector<int> > toreturn;
    vector<int> curr;
    generateSubsets(toreturn,curr,0,p);
    
    vector<vector<int>> res;
    for(int i=0;i<toreturn.size();i++)
    {
        if(toreturn[i].size()==B)
            res.push_back(toreturn[i]);
    }
    sort(res.begin(),res.end());
    return res;
}
