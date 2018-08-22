vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    long long int sum=(long long int)(A.size()*(A.size()+1)/2);
    long long int sumsq=(long long int)(A.size()*(A.size()+1)*(2*A.size()+1)/6);
    long long int arrsum=0,arrsumsq=0;
    for(long long int i=0;i<A.size();i++)
    {
        arrsum+=(long long int)A[i];
        arrsumsq+=(long long int)A[i]*A[i];
    }
    long long int sumdiff=sum-arrsum;
    long long int sumsqdiff=sumsq-arrsumsq;
    long long int divide=sumsqdiff/sumdiff;
    long long int x=(sumdiff+divide)/2;
    long long int y=x-sumdiff;
    vector<int>res;
    res.push_back((int)y);
    res.push_back((int)x);
    return res;
    
}
