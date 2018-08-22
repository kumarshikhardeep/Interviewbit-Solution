void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    bool row_flag = false;
    bool col_flag = false;

    for (int i = 0; i < A.size(); i++) {
        for (int j = 0; j < A[0].size(); j++) {
            if (i == 0 && A[i][j] == 0)
                row_flag = true;
 
            if (j == 0 && A[i][j] == 0)
                col_flag = true;
 
            if (A[i][j] == 0) {
 
                A[0][j] = 0;
                A[i][0] = 0;
            }
        }
    }
 

    for (int i = 1; i < A.size(); i++) {
        for (int j = 1; j < A[0].size(); j++) {
 
            if (A[0][j] == 0 || A[i][0] == 0) {
                A[i][j] = 0;
            }
        }
    }
 
    // modify first row if there was any 1
    if (row_flag == true) {
        for (int i = 0; i < A[0].size(); i++) {
            A[0][i] = 0;
        }
    }
 
    // modify first col if there was any 1
    if (col_flag == true) {
        for (int i = 0; i < A.size(); i++) {
            A[i][0] = 0;
        }
    }

}
