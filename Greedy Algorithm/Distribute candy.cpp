int Solution::candy(vector<int> &A) {
     int n=A.size();
     int candies[n];
     for(int i=0;i<n;i++)
     {
         candies[i]=0;
     }
        candies[0] = 1;
 
        for(int i = 1; i<n; i++) {
            if(candies[i] == 0) {
                candies[i]=1;
            }
 
            if(A[i] > A[i-1]) {
                candies[i] = candies[i-1]+1;
            }
        }

        for(int i = n-1; i > 0; i--) {
            if(A[i-1] > A[i] && candies[i-1] <= candies[i]) {
                candies[i-1] = candies[i]+1;
            }
        }

        int sum=0;
        for(int i = 0; i < n; i++) {
            sum += candies[i];
        }
        return sum;
}
