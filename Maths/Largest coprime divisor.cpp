// int gcd(int x,int y)
// {
//     if(x==0)
//         return y;
//     gcd(y%x,x);
// }
int Solution::cpFact(int A, int B) {
    // int n=max(A,B);
    // while(n)
    // {
    //     if((gcd(n,B)==1) && A%n==0)
    //         return n;
    //     n--;
    // }
     while(__gcd(A,B)!=1)
     {
         A=A/__gcd(A,B);
     }
     return A;
}
