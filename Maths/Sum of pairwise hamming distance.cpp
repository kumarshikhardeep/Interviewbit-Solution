#define mod 1000000007
long long int count(int n)
{
    long long int c=0;
    while(n)
    {
        c+=n&1;
        n>>=1;
    }
    return c;
}
int Solution::hammingDistance(const vector<int> &A) {
    long long int c=0;
    int one=1;
     
    for(int i=0;i<32;i++)
    {
       
        int t=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]&one)
                t++;
            
        }
        one=one<<1;
        c+=(A.size()-t)*t*2;
        c=c%mod;
    }
    
    return (int)c;

}
