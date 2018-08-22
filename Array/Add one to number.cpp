vector<int> Solution::plusOne(vector<int> &A) {
    
    std::vector<int>::iterator it;
    it=A.begin();
    int j=0;
    
    int l=A.size();
    if(l>1)
    {
    while(A[j]==0)
    {
        j++;
    }
    }
    int carry=0;
    if(A[l-1]==9)
    {
        carry=1;
        A[l-1]=0;
    }
    else
    {
        A[l-1]=A[l-1]+1;
    }
    for(int i=l-2;i>=j;i--)
    {
        if(A[i]+carry==10)
        {
            carry=1;
            A[i]=0;
        }
        else
        {
            A[i]=A[i]+carry;
            carry=0;
        }
    }
    if(carry==1)
    {
        A.insert(it+j,1);
        l=l+1;
    }
    for(int i=0;i<j;i++)
    {
        A.erase(it);
    }
  /*  vector <int> v2;
    for(int i=j;i<=l-1;i++)
    {
        v2.push_back(A[i]);
    }
    return v2;
    */
    return A;
}
