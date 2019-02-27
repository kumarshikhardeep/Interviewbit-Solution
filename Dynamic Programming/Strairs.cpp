int Solution::climbStairs(int A) {
    if(A==1 || A==0)
        return 1;
    if(A==2)
        return 2;
    int a=1,b=1,c;
    for(int i=2;i<A;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
