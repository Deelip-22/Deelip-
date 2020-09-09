 // Compiler warning:
    /*
     * Dont Ignore them.
     * 
     * example 1
     * #include<iostream>
     * int main()
     * {
     * int guess_num;
     * std::cout<<guess_num;(guess num is un initialized)
     * return 0;
     * 
     * example 2
     * #include<iostream>
     * int main()
     * {
     *  int guess_num;
     * guess_num =10;
     * std::cout<<"Nothing"<<std::endl;(variable initialized but not used)
     * return 0;
     * }
     * 
     * }
     * */
     
     // Linker error (Usually occours when there is a missing library or object file)
     
     /*
      * #include<iostream>
      * extern int A;()
      * int main()
      * {
      *     std::cout<<A;
      *     return 0;
      * }
      * */
      
      //Runtime error:(Error that occurs when the program is executing )
      /*
       * Types of runtime error:
       * Divide by zero
       * File not found
       * Out of memory etc..
       * 
       * Exceptional handling can help with run time errors.
       * */
       
       
       //Logic error:(Error are the mistakes made by the programmers)
       /*
        * Suppose we have a program where a person can check wheather he/she is old enough to have a driving licence.
        *
        * #include<iostream>
        * int main()
        * {
        *       int age;
        *       std::cout<<"Enter your age;"
        *       std::cin>>age;
        *       if(age >= 18)
        *       {
        *       std::cout<<"yes you can drive!!!";
        *       }
        * }
 
        * */
        
        //Keyword:(vocabulary of any programming language)
        /*
         * C++ has 90 keywords
         * Java has 50 keywords
         * C has 32 keywords
         * python has 33 keywords
         * */
         
        //Identifiers :(These are something which are named by programmers)
        /*main
         * std
         * */
        
        
        //Operator
        /*
         * Standard : +,-, * ,/
         * Non-Standard operator:extraction oerator, ::scope resolution operator
         * 
         * */
        //Punctuations : , ; , "" , () etc..
        
        //Comments (//,/)
        //Syntax