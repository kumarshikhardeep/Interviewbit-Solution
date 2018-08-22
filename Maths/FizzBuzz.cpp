vector<string> Solution::fizzBuzz(int A) {
    int i;
    vector<string> s;
    for (i=1; i<=A; i++)
    {
       
        if (i%15 == 0)        
            s.push_back("FizzBuzz"); 
         

        else if ((i%3) == 0)    
            s.push_back("Fizz");                 
         

        else if ((i%5) == 0)                       
            s.push_back("Buzz");                 
     
        else // print the number            
            s.push_back(to_string(i));                 
 
    }
    return s;
}
