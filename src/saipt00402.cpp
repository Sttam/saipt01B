/*

   Date    : 2020/05/26
   Author  : Matts


   Purpose :  Variation from saipt00401.cpp

             function f is going to modify the value of the parameter.
             it should not compile.

             //param *= 2; please uncomment the line and recompile it.

         Learning : - 

            1. Templates are confusing. So understand what is purpose.
            2. What is the role of compiler.
            3. Many times experts assume the listeners are at their level of understanding.
            4. Once you understand the concept we move to next step.
         
            5. It is dynamically generating the function and made available to linking if everything 
               goes as planned.
            6. template<typename T> void f(const T& param); Compiler enforces integrity. The 
               function is checked for interity.

*/

#include <iostream>
template<typename T> void f(const T& param);

int main () {
  double fraction = 10.2340;

  int  x1{10};

  f(x1);
  return EXIT_SUCCESS;
}

template<typename T>
void f(const T& param){
  //param *= 2;

  std::cout << "function void f(const T& param) : " << param << std::endl;

}
