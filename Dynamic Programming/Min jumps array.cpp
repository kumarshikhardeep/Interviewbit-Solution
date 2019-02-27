int Solution::jump(vector<int> &A) {
//     if(A[0]==0 && A.size()==1)
//         return 0;
//     if(A[0]==0)
//         return -1;
// int jumps[A.size()];
// jumps[0]=0;
// for(int i=1;i<A.size();i++)
// {
//     for(int j=0;j<i;j++)
//     {
//         if(j+A[j]>=i)
//         {
//             jumps[i]=jumps[j]+1;
//             break;
//         }
//     }
// }
// return jumps[A.size()-1];
int n=A.size();
if(n<=1)
    return 0;
if(A[0]==0)
    return -1;
int maxreach=A[0];
int steps=A[0];
int jumps=1;
for(int i=1;i<n;i++)
{
    if(i==n-1)
        return jumps;
    maxreach=max(maxreach,i+A[i]);
    steps--;
    if(steps<=0)
    {
        jumps++;
        if(i>maxreach)
            return -1;
        steps=maxreach-i;
    }
}
return -1;
}