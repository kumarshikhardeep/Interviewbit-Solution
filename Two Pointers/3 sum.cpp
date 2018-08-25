int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int dis=INT_MAX;
    int res=-1;
    for(int i=0;i<A.size()-2;i++)
    {
        int l=i+1;
        int r=A.size()-1;
        while(l<r)
        {
            int t=A[i]+A[l]+A[r];
            int diff=abs(t-B);
            if(diff==0)
            {
                return t;
            }
            if(diff<dis)
            {
                dis=diff;
                res=t;
                
            }
            if(t>B)
            {
                r--;
                
            }
            else
            {
                l++;
            }
        }
    }
    return res;
}
