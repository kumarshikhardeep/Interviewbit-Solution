int Solution::titleToNumber(string A) {
    int count=0;
    for(int i=0;i<A.length();i++)
    {
        count=count*26+(A[i]-'A'+1);
    }
    return count;
}
