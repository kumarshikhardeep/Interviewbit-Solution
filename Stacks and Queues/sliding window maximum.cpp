vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
 
    int max;
    int ind;
    vector<int> res;
    vector<int> index;
    if(A.size()==0)
        return res;
    if(B==1)
        return A;
    for(int i=0;i<=A.size()-B;i++)
    {
        if(index.size()==0 || index[index.size()-1]<i)
        {
            max=A[i];
            ind=i;
        for(int j=i+1;j<i+B;j++)
        {
            if(A[j]>max)
            {
                max=A[j];
                ind=j;
            }
        }
        res.push_back(max);
        index.push_back(ind);
        }
        else
        {
            if(res[index.size()-1]<A[i+B-1])
            {
                res.push_back(A[i+B-1]);
                index.push_back(i+B-1);
            }
            else
            {
                res.push_back(res[index.size()-1]);
                index.push_back(index[index.size()-1]);
            }
        }
        
    }
    return res;
}
