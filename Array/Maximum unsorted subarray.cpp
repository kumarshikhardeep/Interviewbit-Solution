vector<int> Solution::subUnsort(vector<int> &A) {
  /*  int max[A.size()];
    int min[A.size()];
    vector<int>v;
    int start=A.size()-1;
    int end;
    max[0]=A[0];
    min[A.size()-1]=A[A.size()-1];
    for(int i=1;i<A.size();i++)
    {
        if(A[i]>max[i-1])
            max[i]=A[i];
        else
            max[i]=max[i-1];
        
    }
    for(int i=A.size()-2;i>=0;i--)
    {
        if(A[i]<min[i+1])
            min[i]=A[i];
        else
            min[i]=min[i+1];
    }
    for(int i=A.size()-1;i>=0;i--)
    {
        if(A[i]!=max[i])
        {
            end=i;
            break;
        }
    }
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=min[i])
        {
            start=i;
            break;
        }
    }
    // for(int i=0;i<A.size();i++)
    // {
    //     cout<<max[i]<<"  ";
    // }
    if(start==A.size()-1)
    {
        v.push_back(-1);
        return v;
    }
    v.push_back(start);
    v.push_back(end);
    return v;
    */
   int start=-1,end=-1;
   vector<int>v;
   for(int i=0;i<A.size()-1;i++)
   {
       if(A[i]>A[i+1])
       {
        start=i;
        break;
       }
   }
   if(start==-1)
   {
       v.push_back(-1);
       return v;
   }
   for(int i=A.size()-1;i>=1;i--)
   {
       if(A[i]<A[i-1])
       {
           end=i;
           break;
           
       }
   }
   int max=INT_MIN,min=INT_MAX;
   for(int i=start;i<=end;i++)
   {
       if(A[i]>max)
            max=A[i];
        if(A[i]<min)
            min=A[i];
   }
   for(int i=0;i<start;i++)
   {
       if(A[i]>min)
        {
            start=i;
            break;
        }
   }
   for(int i=A.size()-1;i>end;i--)
   {
       if(A[i]<max)
       {
           end=i;
           break;
       }
   }
   v.push_back(start);
   v.push_back(end);
   return v;
}
