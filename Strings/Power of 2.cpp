int Solution::power(string A) {
     long long  k = 0;
    int i=0;
    int len = A.size();
    while(i<len)
    {
        k = k*10+(A[i]-'0');
        i++;
    }
    if(k == 1)
        return 0;
    int p = k-1;
    if((k & p) == 0)
        return 1;
    else
        return 0;
}
