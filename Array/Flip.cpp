vector<int> Solution::flip(string A) {
   
   int start=0,s=0,end=0,max=INT_MIN,a=0,flag=0;
   vector<int> arr;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='0'){
            a+=1;
            flag=1;
        }
        else
            a=a-1;
        if(a>max)
        {
            max=a;
            start=s;
            end=i;
        }
        if(a<0)
        {
            a=0;
            s=i+1;
            
        }
        
    }
    if(flag==0)
        return arr;
    arr.push_back(start+1);
    arr.push_back(end+1);
    return arr;
}