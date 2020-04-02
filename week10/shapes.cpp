#include <iostream>
using namespace std;

const int PI = 3; // for simplicity, we'll pretend PI is 3
class shape{

  public:
    int get_perimeter_length(){ return -1; }
    int get_area(){             return -1; }
};

class circle : public shape{
  public:
    circle(int radius){ }
    int get_perimeter_length(){ return -1; }
    int get_area(){             return -1; }
};

class rectangle : public shape{
  public:
    rectangle(int height, int width){ }
    int get_perimeter_length(){ return -2; }
    int get_area(){             return -2; }

};

class square : public shape{
  public:
    square(int side) { }
    int get_perimeter_length(){ return -3; }
    int get_area(){             return -3; }

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

