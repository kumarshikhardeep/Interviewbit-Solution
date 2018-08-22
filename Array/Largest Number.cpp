int comp(string a,string b)
{
    string ab=a+(b);
    string ba=b+(a);
    return ab.compare(ba)>0?1:0;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> arr;
    for(int i=0;i<A.size();i++)
    {
        arr.push_back(to_string(A[i]));
    }
    sort(arr.begin(),arr.end(),comp);
   
    string res="";
    for(int i=0;i<arr.size();i++)
    {
        res+=(arr[i]);
    }
  if(stoi(arr[0])==0)
    return to_string(0);
    return res;
}
