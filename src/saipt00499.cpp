/*

   Date    : 2020/05/26
   Author  : Matts


   Purpose : 
         Without a solid understanding of how type deduction operates, 
         effective programming in modern C++ is all but impossible. 
         There are just too many contexts where type deduction takes 
         place: in calls to function templates, in most situations where auto appears, 
         in decltype expressions, and, as of C++14, where the enigmatic decltype(auto) construct is employed.

*/

#include <iostream>
template<typename T> void f(T& param);
template<typename T> void f(const T& param);
void f(int& param);
void f(int& param){
  param *= 2;
  std::cout << "function void f(int& param) : " << param << std::endl;
}

int main () {
  double fraction = 10.2340;

  int  x1 = 10;
  auto x2 = 20;
  const int x3 = 30;

  f(x1);
  std::cout << "Hello I am in the main : " << x1 << std::endl;

  f(x2);
  std::cout << "Hello I am in the main : " << x2 << std::endl;

  f(x3);
  std::cout << "Hello I am in the main : " << x3 << std::endl;

  f(fraction);
  std::cout << "Hello I am in the main : " << fraction << std::endl;

  return (EXIT_SUCCESS);
}

template<typename T>
void f(T& param){
  param *= 2;
  std::cout << "function void void f(T& param) : " << param << std::endl;
}

template<typename T>
void f(const T& param){
  //param *= 2;
  std::cout << "function void f(const T& param) : " << param << std::endl;
}

