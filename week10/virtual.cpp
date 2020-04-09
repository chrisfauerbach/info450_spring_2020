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
    virtual void show();
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

 automobile c;
 c.set_wheels(4);
 c.set_pass(2);
 c.set_type(car);


 road_vehicle r1 = c;
 cout << "Base: r1" << endl;
 r1.show();
 road_vehicle *p;
 p = &c;
 cout << "pointer: *p" << endl;
 p->show();
 cout << "Automobile" << endl;
 c.show();

}

