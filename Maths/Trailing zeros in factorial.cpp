int Solution::trailingZeroes(int A) {
    if(A==0)
    return 0;
    int five=0,two=0;
    while(A!=1)
    {
        int n=A;
        while(n%5==0)
        {
            five++;
            n=n/5;
        }
        while(n%2==0)
        {
            two++;
            n=n/2;
        }
        A--;
    }
    if(five<=two)
    return five;
    else
    return two;
}
