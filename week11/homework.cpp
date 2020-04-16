#include <iostream>
using namespace std;
const int PI = 3; // for simplicity, we'll pretend PI is 3
class shape{
  public:
      virtual int get_perimeter_length(){ return -1; }
      virtual int get_area(){             return -1; }
};

class circle : public shape{
  private:
    int _radius;
  public:
    circle(int radius){ 
        _radius = radius;
    }
    int get_perimeter_length(){ return 2* PI * _radius; }
    int get_area(){            return PI * _radius*_radius; }
};

class rectangle : public shape{
  private:
    int _height;
    int _width;
  public:
    rectangle(int height, int width){
        _height = height;
        _width = width;
     }
    int get_perimeter_length(){ return 2*_width + 2* _height ; }
    int get_area(){             return _width * _height; }
};

class square : public shape{
  private:
    int _side;
  public:
    square(int side) { _side = side; }
    int get_perimeter_length(){ return 4*_side; }
    int get_area(){             return _side*_side; }
};

int main(){
  shape *s1;
  circle c(3);
  s1 = &c;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  square s(3);
  s1 = &s;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  rectangle r(4,5);
  s1 = &r;
  cout << "Perimeter: " << s1->get_perimeter_length() << " : Area " << s1->get_area() << endl;
  return 0;
}