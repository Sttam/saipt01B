/*

   Date           : 2020/05/26
   Author         : Matts

   Purpose        : Checking to see the environment, compiler, cmake works for you.

   Instructions   : 
                       ......
                       1. run ./saipt00102
                       2. run ./saipt00102 | grep saipt 
                       3. run ./saipt00102 | grep saipt >temp.txt

   Quiz yourself  :
                      1.  Line 2 is an express. Remember the return in saipt00101
                      2.  What is the compiler doing with the expression
                      3.  What is the output of the program
                      4.  What is the output of the program if run ./saipt00102 & why?
                      5.  What is the output of the program if run ./saipt00102 | grep saipt
                      6.  What is the output of the program if run ./saipt00102 | grep saipt >temp.txt
                      7.  What happened to the stdin and stdout?
  
                      :) There could be more questions. Let us limit it here.

*/

#include <iostream>

int main( int argc, char* argv[], char *envp[]){

    ( 20 * 30 * 40 );

    std::cout << "\nCommand-line arguments:\n";

    for( auto count = 0; count < argc; count++ )
         std::cout << "  argv[" << count << "]   " << argv[count] << "\n";
    std::cout << "\n";

    return EXIT_SUCCESS;
}
