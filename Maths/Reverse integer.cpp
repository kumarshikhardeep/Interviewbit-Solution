int Solution::reverse(int A) {
    
    long long int B=0;
    int sign =1;
    if(A<0)
        sign=-1;
    A=abs(A);
    while(A!=0)
    {
        B=B*10 + (A%10);
        A=A/10;
    }
    if(B>INT_MAX || B<INT_MIN)
        return 0;
    return B*sign;
}
