/*

   Date           : 2020/05/26
   Author         : Matts


   Purpose        : Displaying the small services like a sentinel value is provided
                    after the last value in argv array to control the while loop.
                    it is similar to the iter.end() expression.

   Instructions   : 
                       1. go to the saipt/build 
                       2. run cmake ../
                       3. run cmake --build ./
                       4. run ./saipt00103

   Quiz yourself  :
                      1.  What value printed out for pi
                      1.  What value printed out for pc
                      2.  Have an understanding of pointer Pointer Arithmetic

*/

#include <iostream>
int main( int argc, char* argv[], char *envp[]){

    std::cout << "\nCommand-line arguments:\n";
    int i{0};
    while(*argv){
        std::cout << "  argv[" << i++ << "]   " << *argv << "\n";
        argv++;

    }
    std::cout << "\n";

    int *pi {0};
    char *pc {0};
    pi++; 
    pc++;
    std::cout << "  pi " << reinterpret_cast<size_t>(pi)  << " pc   " << reinterpret_cast<size_t>(pc) << "\n";
    return EXIT_SUCCESS;
}
