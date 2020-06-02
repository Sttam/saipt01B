#ifndef  __CTYPICAL__
#define  __CTYPICAL__
#prgma once
/*

Use of the header file


*/
#include <iostream>

namespace saipt{

using namespace std;

constexpr int size = 10;

class CHeavy {
   private:
      int width, height;
      
   public:
   friend std::ostream& operator<<( std::ostream& os, const CRect& rect);
};

}//namespace saipt
#endif

