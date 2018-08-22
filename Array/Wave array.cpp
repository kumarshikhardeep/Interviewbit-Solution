vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int p;
    if(A.size()%2==0)
     p=A.size();
    else
     p=A.size()-1;
    for(int i=0;i<p;i=i+2)
    {
        int t=A[i];
        A[i]=A[i+1];
        A[i+1]=t;
    }
    return A;
}
