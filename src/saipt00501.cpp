/*

   Date    : 2020/06/01
   Author  : Matts


   Purpose : 
         Move semantics of Move.
             1. Why we need move semantics
         Learning : - 
            1. Passing by value copies the entire object to a new place in the stack.
            3.

*/

#include <iostream>
#include <vector>
#include <time.h>  

const int  LOOP_COUNT = 10000;
/*
    Functon template
    template <typename T> T f( T t );

    it will be used in the code.
    std::vector<int>> myvec={ 1, 2, 3 };
*/

template < typename T > T foo (T t);

int main ()
{

  std::vector <int>  myvec = { 1, 2, 3 };

  clock_t t; 
  t = clock(); 
  myvec = foo( myvec ); 
  t = clock() - t; 
  double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  std::cout << "foo() with size " << myvec.size() << " has taken " <<  time_taken << " seconds to execute" << std::endl;

  return EXIT_SUCCESS;
}


template < typename T > T foo (T t)
{
  auto lcount {0}; 
  while( lcount < LOOP_COUNT ){
        t.push_back( lcount++ * 10 );
  }

  return t;
}
