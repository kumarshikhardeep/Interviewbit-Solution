int Solution::atoi(const string A) {
    
    int i=0;
    while(A[i]==' ' && i<A.size())
        i++;
    int sign=1;
    if(A[i]=='-')
    {
        sign=-1;
        i++;
    }
    else if(A[i]=='+')
        i++;
    else
        i=i;
    long long int res=0;
    while((A[i]<='9' && A[i]>='0') && i<A.size())
    {
        res=res*10+(A[i]-'0');
        if(res*sign > INT_MAX)
            return INT_MAX;
        if(res*sign < INT_MIN)
            return INT_MIN;
        i++;
    }
    res=res*sign;
    return res;

}
