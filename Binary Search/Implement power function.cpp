int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   if(x == 0)
    {
        return 0;
    }
    long long int r=1,z=x;
    while(n>0)
    {
        if(n%2)
        {
            r = (r*z)%d;
            if(r<0)
            r+=d;
        }
        z = (z*z)%d;
        if(z<0)
        z+=d;
        n = n>>1;
    }
    
    return r;
}