int Solution::gcd(int A, int B) {
    if(A==0 && B!=0) 
    return B;
    if(B==0 && A!=0)
    return A;
    
    while(A!=B)
    {
        if(A>B)
            A=A-B;
        else
            B=B-A;
    }
    return A;
}
