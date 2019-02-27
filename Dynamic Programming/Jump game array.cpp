int Solution::canJump(vector<int> &A) {
    if(A.size()==1)
        return 1;
    if(A[0]==0)
        return 0;
    int maxreach=A[0];
    int steps=A[0];
    int jumps=1;
    for(int i=1;i<A.size();i++)
    {
        if(i==A.size()-1)
            return 1;
        maxreach=max(maxreach,i+A[i]);
        steps--;
        
        if(steps<=0)
        {
            jumps++;
            if(i>=maxreach)
                return 0;
            steps=maxreach-i;
        }
    }
    return 0;
}
