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
enum type {car, van, wagon};
class automobile : public road_vehicle{
  private:
    enum type car_type;
  public:
    void set_type(type t){ car_type = t; }
    enum type get_type() { return car_type; }
    void show();
};
void automobile::show(){
  cout << "Wheels        : " << get_wheels() << endl;
  cout << "Passengers    : " << get_pass() << endl;
  cout << "Automobile Tp : ";
  switch(get_type()){
    case van: cout << "van";break;
    case car: cout << "car";break;
    case wagon: cout << "wagon";break;
  }
  cout << endl;
}
int main(){
 truck t1;
 automobile c;
 t1.set_wheels(16);
 t1.set_pass(2);
 t1.set_cargo(18000);
 c.set_wheels(4);
 c.set_pass(2);
 c.set_type(car);
 t1.show();
 c.show();
}

