vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string,vector<int> > mp;
    vector<vector<int> > toreturn;
    for(int i=0;i<A.size();i++)
    {
        string s = A[i];
        sort(s.begin(),s.end());
        if(mp.find(s)!=mp.end())
        {
            mp[s].push_back(i+1);
        }
        else
        {
            vector<int> t;
            t.push_back(i+1);
            mp.insert(make_pair(s,t);
        }
    }
    unordered_map<string,vector<int> >::iterator itr;
    itr = mp.begin();
    while(itr != mp.end())
    {
        toreturn.push_back(itr->second);
        itr++;
    }
    return toreturn;
}
