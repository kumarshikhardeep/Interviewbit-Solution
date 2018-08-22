string Solution::longestCommonPrefix(vector<string> &A) {
    int flag=0,j;
    for(j=0;j<A[0].size();j++)
    {
        for(int i=0;i<A.size()-1;i++)
        {
            if(A[i][j]!=A[i+1][j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    return A[0].substr(0,j);
}
