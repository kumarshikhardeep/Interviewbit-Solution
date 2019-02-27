int Solution::seats(string A) {
    vector<int> v;
    for(int i=0;i<A.length();i++)
    {
        if(A[i]=='x')
            v.push_back(i);
    }
    if(v.size()==0 || v.size()==1)
        return 0;
    int c=1;
    int sum=0;
    if(v.size()%2!=0)
    {
        int mid=v[v.size()/2];
        for(int i=0;i<v.size()/2;i++)
        {
            sum+=mid-v[i]-c;
            sum+=v[v.size()-i-1]-mid-c;
            c++;
        }
    }
    else
    {
        int mid1=v[v.size()/2 - 1];
        int mid2=v[v.size()/2];
        int dis=mid2-mid1-1;
        if(dis%2==0)
        {
            mid1=mid1+(dis/2);
            mid2=mid2-(dis/2);
        }
        else
        {
            if(dis>1)
            {
                mid1=mid1+(dis/2);
                mid2=mid2-(dis/2);
            }
            mid1+=1;
        }
        sum+=dis;
        for(int i=0;i<v.size()/2 - 1; i++)
        {
            sum+=mid1-v[i]-c;
            sum+=v[v.size()-i-1]-mid2-c;
            c++;
        }
    }
    return sum;
}
