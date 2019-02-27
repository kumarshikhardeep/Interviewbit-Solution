string m[]={"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
void combinations(vector<string> &v, vector<string>&ans, int i, string str)
{
    if(i==v.size())
    {
        ans.push_back(str);
        return;
    }
    for(int j=0;j<v[i].size();j++)
    {
        str[i]=v[i][j];
        combinations(v,ans,i+1,str);
        
        
    }
    return;
}
vector<string> Solution::letterCombinations(string A) {
    vector<string> v;
    for(int i=0;i<A.size();i++)
    {
        v.push_back(m[A[i]-'0']);
        //cout<<m[A[i]-'0']<<" ";
    }
    //  for(int i=0;i<A.size();i++)
    //  {
    //      cout<<v[i]<<" ";
    //  }
    //  cout<"\n";
    vector<string> ans;
    char str[v.size()+1];
    str[v.size()]='\0';
    combinations(v,ans,0,str);
    return ans;
}