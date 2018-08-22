vector<vector<int> > Solution::generate(int A) {
      vector<vector<int>> res;
      vector<int> temp;
      if(A==0)
          return res;
      temp.push_back(1);
      res.push_back(temp);
      if(A==1)
          return res;
      temp.push_back(1);
      res.push_back(temp);
      for(int i=2;i<A;i++)
      {
          vector<int> t=res.back();
          temp.clear();
          temp.push_back(1);
          for(int j=1;j<i;j++)
          {
              int x=t[j]+t[j-1];
              temp.push_back(x);
          }
          temp.push_back(1);
          res.push_back(temp);
      }
      return res;
}
