int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int fuel=0,sum=0,start=0;
    for(int i=0;i<A.size();i++)
    {
        sum=sum+(A[i]-B[i]);
        fuel=fuel+(A[i]-B[i]);
        if(fuel<0)
        {
            fuel=0;
            start=i+1;
        }
    }
    if(sum>=0)
        return start;
    return -1;
}
