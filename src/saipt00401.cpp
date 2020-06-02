/*

   Date    : 2020/05/26
   Author  : Matts


   Purpose : 
         Without a solid understanding of how type deduction operates, 
         effective programming in modern C++ is all but impossible. 

         Here we are telling the compiler that our function should treat the variable passed to the function
         as constant reference. 
         template<typename T> void f(const T& param);

         So when we implement the functions, the policy should be followed. That is the job of the compile.

         if that is violated. It is an error.

         Learning : - 

            1. Templates are confusing. So understand what is purpose.
            2. What is the role of compiler.
            3. Many times experts assume the listeners are at their level of understanding.
            4. Once you understand the concept we move to next step.

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

  std::cout << "function void f(const T& param) : " << param << std::endl;

}
