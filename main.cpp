#include<iostream>
int main()
{
    int guess_num;
    std::cout<<"Please guess a number from 1 to 10 :";
    std::cin>>guess_num;
    std::cout<<"The number is "<<guess_num <<std::endl;
    return 0;
}    
    //keywords and operators used in above code 
    // #---> Pound sign,it is used for onlyto make pretty
    //include ---> Way of including a standard library or user-defined file in a program.
    //<iostream>--->Defines the standard input/output stream of objects ,Eg:Cout,Cin,Cerr.
    //main()---> It is the function which is called when program is executed .The execution of cpp files begins from here.
    //std( standard) ---> std is a namespace in which cin/cout is defined.
    //cout ---> standard output stream
    //endl ---> ends line
    //prompt --->Message that is shown to the user.
    //cin --->  standard input stream
    //<<  ---> insertion operator,Helps in inserting values in  the program .
    //>>  ---> extraction operator,Grabs the value that user has entered.
    //guess_num ---> variable  (it is a box)
    //int --->Datatype
    //return ---> Returns a value for main ().
    //"...." ---> takes string value 
    //'..'   ---> takes character value 
    //Compiler error:Syntax error and symantic error
    
    
    //example of Syntax error 
    /*#include<iostream
     * int main()
     *{
     * std::cout>>"WOAH";(extraction operator insted of input operator)
     * return 0;
     * 
     * } */
     
     
     //symentic error--->
     /*
      *#include<iostream>
      * int main()
      * {
      * return 0;(codes ends here so codes below won't run)
      * std::cout<<"Enter anything";
      * }*/
      