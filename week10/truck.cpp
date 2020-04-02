#include <iostream>
using namespace std;

class road_vehicle {
  private:
    int wheels;
    int passengers;
  public:
    void set_wheels(int num) { wheels = num; }
    int get_wheels() { return wheels; }
    void set_pass(int num) { passengers = num; }
    int get_pass() { return passengers; }
};

class truck : public road_vehicle {
  private:
    int cargo;
  public:
    void set_cargo(int size){ cargo = size;}
    int get_cargo() { return cargo; }
    void show();
};

void truck::show(){
  cout << "Wheels        : " << get_wheels() << endl;
  cout << "Passengers    : " << get_pass() << endl;
  cout << "Cargo Capacity: " << get_cargo() << endl;
}

int main(){
  truck t1;
  t1.set_wheels(6);
  t1.set_pass(2);
  t1.set_cargo(30000);

  t1.show();

  return 0;

}
