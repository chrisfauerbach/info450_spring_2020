#include <iostream>
using namespace std;
class Employee {
  public:
    Employee();  // constructor
    ~Employee(); // destructor
};
Employee::Employee(){
  cout << "Constructor" << endl;
}
Employee::~Employee(){
  cout << "Destructor" << endl;
}
int main(){
  Employee a, b;
  return 0;
}
