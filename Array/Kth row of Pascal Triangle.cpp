vector<int> Solution::getRow(int A) {
    vector<vector<int>> res;
      vector<int> temp;
      temp.push_back(1);
      res.push_back(temp);
      if(A==0)
          return temp;
      temp.push_back(1);
      res.push_back(temp);
      for(int i=1;i<=A;i++)
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
      return temp;
}
