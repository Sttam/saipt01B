#ifndef  __CTYPICAL__
#define  __CTYPICAL__
#include <iostream>

namespace saipt{

using namespace std;
constexpr int size = 10;

class CHeavy {
   private:
      int width, height;
      
   public:
      CHeavy( int a = 0, int b = 0):width{a},height{b} {}
      int area() { return ( width *height); }
      CRect operator *= ( int x ){
        width *= x;
        height *= x;
      std::cout << "From CRect *= Width " << width << "   Hieght " << height << std::endl;
          return( *this ); 
      }
      friend std::ostream& operator<<( std::ostream& os, const CRect& rect);
};

      std::ostream& operator<<( std::ostream& os, const CRect& rect)
      {
          os << "Width : " << rect.width <<  " Heigth" << rect.height << std::endl;
          return os;
      }
}//namespace saipt

#endif

