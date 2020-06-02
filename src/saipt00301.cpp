/*

   Date    : 2020/05/26
   Author  : Matts


   Purpose : To demonstrate a simple class.

*/

#include <iostream>

class Rectangle {

    int m_width{0};
    int m_height{0};

  public:

    Rectangle(int width, int height) : m_width{width}, m_height{height}{};

    int area() {
         auto rect_area = m_width * m_height;
         std::cout << "area: " << rect_area << std::endl;
         return rect_area;
    };
    friend std::ostream& operator<<( std::ostream &os, const Rectangle&  rect );
};

std::ostream& operator<<( std::ostream &os, const Rectangle &rect ){
         os << "Width : " << rect.m_width << " Height : " << rect.m_height << std::endl;
         return os;

}

int main () {
  Rectangle rect( 3,4);
  rect.area();
  std::cout << rect;
  return 0;
}
