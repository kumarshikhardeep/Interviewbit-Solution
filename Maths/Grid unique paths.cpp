long int fact(int n)
{
    long int f=1;
    for(int i=2;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int Solution::uniquePaths(int A, int B) {
    if(A==1 || B==1)
    return 1;
    int n=A+B-2;
    int r=A<B?A-1:B-1;
    long long int f=1,t=1;
    for(int i=n,count=0;count<r;count++)
    {
        f=f*i;
        i--;
    }
    for(int i=r;i>=2;i--)
    {
        t=t*i;
    }
    int res=f/t;
    return res;
}
