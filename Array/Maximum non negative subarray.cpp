vector<int> Solution::maxset(vector<int> &A) {
    long int cursum=0,curstart=0,curlen=0;
    long int maxsum=0,maxstart=0,maxlen=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<0)
        {
            if((cursum>maxsum) || (cursum==maxsum && curlen>maxlen))
            {
                maxsum=cursum;
                maxlen=curlen;
                maxstart=curstart;
            }
            curstart=i+1;
            curlen=0;
            cursum=0;
        }
        else{
        cursum+=A[i];
        curlen++;
        }
    }
    if((cursum>maxsum) || (cursum==maxsum && curlen>maxlen))
            {
                maxsum=cursum;
                maxlen=curlen;
                maxstart=curstart;
            }
    vector<int> res;
    for(int i=maxstart;i<maxlen+maxstart;i++)
    {
        res.push_back(A[i]);
    }
    return res;
}
