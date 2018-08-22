int Solution::lengthOfLastWord(const string A) {
    int l=0;
    int i;
    int count=0;
    for( i=A.size()-1;i>=0;i--)
    {
        if(A[i]!=' ')
        {
            count++;
        }
        if(A[i]==' ' && count==0)
          continue;
        if(A[i]==' ' && count!=0)
          break;
    }
    
    return count;
}
