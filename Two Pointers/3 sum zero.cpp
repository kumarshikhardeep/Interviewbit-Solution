vector<vector<int> > Solution::threeSum(vector<int> &A) {
    
    sort(A.begin(),A.end());
    // for(int i=0;i<A.size();i++)
    //     cout<<A[i]<<"  ";
    vector<vector<int>> res;
    if(A.size()<3)
        return res;
    for(int i=0;i<A.size()-2;i++)
    {
        int l=i+1;
        int r=A.size()-1;
        while(l<r)
        {
            vector<int> zero;
            int t=A[i]+A[l]+A[r];
            if(t==0)
            {
                zero.push_back(A[i]);
                zero.push_back(A[l]);
                zero.push_back(A[r]);
                res.push_back(zero);
                l++;
                r--;
                
            }
            else if(t>0)
                r--;
            else
                l++;
        }
    } 
    if(res.size()==0)
        return res;
    sort(res.begin(),res.end());
    vector<vector<int>> toreturn;
    for(auto i=0;i<res.size()-1;i++)
    {
        if(res[i]!=res[i+1])
            toreturn.push_back(res[i]);
    }
    toreturn.push_back(res[res.size()-1]);
    // for(auto i=0;i<res.size()-1;i++)
    // {
    //     if(res[i]==res[i+1])
    //     {
    //         res.erase(res.begin()+i);
            
    //     }
    // }
    return toreturn; 
}
