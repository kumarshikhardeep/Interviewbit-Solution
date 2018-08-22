int Solution::firstMissingPositive(vector<int> &A) {
    /*int j=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<=0)
        {
            int temp=A[j];
            A[j]=A[i];
            A[i]=temp;
            j++;
        }
    }
    j=j-1;*/
    for(int i=0;i<A.size();i++)
    {
        if(A[i]>0 && A[i]<A.size())
        {
            if(A[i]-1!=i && A[A[i]-1]!=A[i])
            {
                int temp=A[A[i]-1];
                A[A[i]-1]=A[i];
                A[i]=temp;
                i--;
            }
        }
    }
   /* int i=0;
    while(i<A.size())
    {
        if(A[i]>=A.size() || A[i]<0)
        {
            i++;
            continue;
        }
        if(A[i]!=i && A[A[i]]!=A[i]){
        int t=A[i];
        A[i]=A[A[i]];
        A[A[i]]=t;
        i--;
        }
        i++;
        
    }*/
    int i;
    for( i=0;i<A.size();i++)
    {
        if(A[i]!=i+1)
        return i+1;
    }
 /*   for(int i=j+1;i<A.size();i++)
    {
        
       // if(j+A[i]>=A.size() )
        {
         //   continue;
        }
        if(A[j+abs(A[i])]>0)
        A[j+abs(A[i])]=A[j+abs(A[i])]*-1;
    }
    int i;
    for( i=j+1;i<A.size();i++)
    {
        if(A[i]>0)
        {
            
            return i-j;
        }
    }
    */
    return i+1;
}
