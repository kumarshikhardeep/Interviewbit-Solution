vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> res;
    vector<int>temp;
    if(A.size()==0)
        return res;

    for(int i=0;i<A.size();i++)
    {
        int k=0;
        for(int j=i;j>=0;j--)
        {
            temp.push_back(A[k][j]);
            k++;
        }
        res.push_back(temp);
        temp.clear();
    }
    for(int i=1;i<A.size();i++)
    {
        int k=A.size()-1;
        for(int j=i;j<A.size();j++)
        {
            temp.push_back(A[j][k]);
            k--;
        }
        res.push_back(temp);
        temp.clear();
    }
    return res;
}
