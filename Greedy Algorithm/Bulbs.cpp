int Solution::bulbs(vector<int> &A) {
    int c=0;
    for(int i=0;i<A.size();i++)
    {
        if(c%2==0 && A[i]==0)
            c++;
        else if(c%2==1 && A[i]==1)
            c++;
    }
    return c;
}
