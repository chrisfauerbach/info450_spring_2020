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
    void show();
};

void road_vehicle::show(){
  cout << "(r)Wheels        : " << get_wheels() << endl;
  cout << "(r)Passengers    : " << get_pass() << endl;
}

class truck : public road_vehicle {
  private:
    int cargo;
  public:
    void set_cargo(int size){ cargo = size;}
    int get_cargo() { return cargo; }
    void show();
};

void truck::show(){
  cout << "(t)Wheels        : " << get_wheels() << endl;
  cout << "(t)Passengers    : " << get_pass() << endl;
  cout << "(t)Cargo Capacity: " << get_cargo() << endl;
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
  cout << "(a)Wheels        : " << get_wheels() << endl;
  cout << "(a)Passengers    : " << get_pass() << endl;
  cout << "(a)Automobile Tp : ";
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
 road_vehicle r1 = c;
 road_vehicle r2 = t1;
 r1.show();
 r2.show();
}

