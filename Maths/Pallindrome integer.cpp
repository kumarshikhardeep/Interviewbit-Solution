int Solution::isPalindrome(int A) {
    if(A<0)
    return 0;
    int t=0;
    int p=A;
    while(p!=0)
    {
        t=t*10+p%10;
        p=p/10;
    }
    if(t==A)
    return 1;
    else
    return 0;
}
