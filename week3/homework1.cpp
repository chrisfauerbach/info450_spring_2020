#include <iostream>
using namespace std;

const double PI = 3.14;

double calculateCircumference(double radius);
int main(){
  double radius;
  cin >> radius;
  cout << calculateCircumference(radius);

    return 0;
}

double calculateCircumference(double radius){
    double circ  = PI * 2 * radius;
    cout << "The alsdkfjlkajsdf " << circ;
    
    return circ;
}
