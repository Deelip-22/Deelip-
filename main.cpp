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
//c++Preprocessor:It is a program that processes all the source code before compiler sees the code.
//THe process includes:
//-first removes all the comments and replaces it with a space.
//-Then it looks for the preprocessorr directives and execute them.
//C++ preprocessor doesnot understands the C++
//Preprocessor Directives:Preprocessor Directives are lines in socure code beign with #.
//When compiler sees the socure code all the comments are removed and the preprocess directives are processed.


//Comment:We have 2 type of commenting in C++
//-Single line comment and Multi line comment
//Single line comment://This is a single line comment
//Multi line comment:/*.......*/
/*******************
 * Dependicies
 * Tensorflow
 * Keras
 * Numpy
 * Matplotilb
 * Pandas
* ***************************/
//Main():While we learn about function we will dive deep.



//namespace:Helps in removing name conflicts.
/*
*#include<iostream>
int main()
{
    int cout;
    std::cout<<"Please enter a number";
    std::cin>>cout;
    std::cout<<"The number is"<<cout<<std::endl;
    return 0;
}
 
/*
 * #include<iostream>
 * using std::cout;
 * using std::cin;
 * using std::endl;
   
 *int main()
 * {
 * int num;
 * cout<<"Please enter a number";
 * cin>>num;
 * cout<<"The number is "<<num;
 * return 0;
 * }
 **/
//Cout and cin

 /*
 #include<iostream>
  using namespace std;
  int main()
 {
  //cout<<"HEllo world!!!"<<endl;
  //cout<<"Hello";
  //cout<<"World!!!"<<endl;
  //cout<<"Hello"<<"World!!!"<<endl;
  //cout<<"Hello"<<"WOrld!!!\n";
  //cout<<"Hello\nOut\nTHere\n";
  //}
**/


/*
int num1;
int num2;
double num3;
//cout<<"Enter num1";
//cin>>num1;
//cout<<"Enter num2";
//cin>>num2;
//cout<<"You entered"<<num1<<"and"<<num2<<endl;
cout<<"Enter num1";
cin>>num1;
cout<<"Enter the num 3";
cin>>num3;
cout<<"You entered"<num1<<"and"<<num3<<endl;
}
**/
* Used for represent True and False .(Zero for False,Non Zero for True)
    */
    
    //Constant
    /*
     * Like variables ,also have names,also occupies space.
     * Which doesnot need to be changed in the program i.e remains same throughtout the program
     * */
     // Type of constant:
     /*
      * Literal Constant:
      *     Eg: x=12, y=1.5,name ='Hari'
      * 
      * Declared Constant:
      *      is defined using 'const' keyword (eg: const int month_in_year {12};)
      * 
      * Enumerated Constant:
      *       enum Keyword
      * 
      * Constant Expression:
      *        const expr Keyword
      * 
      * Define Constants
      *         eg:(#define pi 3.1415)
      * */
