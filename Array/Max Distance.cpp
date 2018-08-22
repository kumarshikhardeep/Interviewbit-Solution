int Solution::maximumGap(const vector<int> &A) {
    int min[A.size()];
    int max[A.size()];
    min[0]=A[0];
    max[A.size()-1]=A[A.size()-1];
    for(int i=1;i<A.size();i++)
    {
        if(A[i]<min[i-1])
        min[i]=A[i];
        else
        min[i]=min[i-1];
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        if(A[i]>max[i+1])
        max[i]=A[i];
        else
        max[i]=max[i+1];
    }
    int i=0,j=0,dist=-1;
    while(i<A.size() && j<A.size())
    {
        if(min[i]<=max[j])
        {
            if(dist<j-i)
            dist=j-i;
           
            j++;
        }
        else
        {
            i++;
        }
    }
    return dist;
}
