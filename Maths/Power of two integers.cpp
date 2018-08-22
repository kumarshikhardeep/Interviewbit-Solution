int Solution::isPower(int A) {
 /*    if(A<=0)
    {
        return 0;
    }
    if(A == 1)
    {
        return 1;
    }
    int s = sqrt(1999999999);
    for(int i=2;i<s+10;i++)
    {
        if(i>=A)
        break;;
        int temp = A;
        while(temp != 1)
        {
            if(temp%i)
            {
                break;
            }
            temp = temp/i;
        }
        if(temp == 1)
        {
            return 1;
        }
    }
    return 0;*/
       int i,j;
    if(A == 1){
        return 1;
    }
    
    for(i = 2; i < 32; i++){
        for(j = 2; j <= pow(INT_MAX, 1.0/i); j++){
            if(pow(j, i) == A){
                return 1;
            }
        }
    }
    return 0;
}

