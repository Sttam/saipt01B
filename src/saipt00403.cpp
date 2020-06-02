/*

   Date    : 2020/05/26
   Author  : Matts


   Purpose :  Variation from saipt00402.cpp

             function f is going to modify the value of the parameter.
             template<typename T> void f(T& param);
             x1 is a constant reference.


         Learning : - 

            1. When function template is moved 

*/

#include <iostream>
template<typename T> void f(T& param);

int main () {

  const int  &x1{10};

  f(x1);
  return EXIT_SUCCESS;
}

template<typename T>
void f(T& param){
  param *= 2;

  std::cout << "function void f(const T& param) : " << param << std::endl;

}
