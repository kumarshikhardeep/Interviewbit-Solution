int Solution::diffPossible(vector<int> &A, int B) {
    if(A.size()==1)
        return 0;
    int i=0,j=1;
    while(i!=j && i<A.size() && j<A.size())
    {
        if(A[j]-A[i]<B)
        {
            j++;
           
        }
        else if(A[j]-A[i]>B)
        {
            i++;
             if(i==j)
             {
                 j++;
                 
             }
        }
        else 
            return 1;
    }
    return 0;
}
