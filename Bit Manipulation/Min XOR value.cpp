int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    int min=INT_MAX;
    for(int i=0;i<A.size()-1;i++)
    {
        int t=A[i]^A[i+1];
        if(t<min)
            min=t;
    }
    return min;
}
