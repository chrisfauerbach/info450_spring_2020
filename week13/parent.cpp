#include <iostream>
using namespace std;
class SuperClass
{
    public:

        SuperClass(int foo)
        {
            cout << "SuperClass: foo parameter: " << foo << endl;
        }
};

class SubClass : public SuperClass
{
    public:

        SubClass(int foo, int bar)
        : SuperClass(foo)    // Call the superclass constructor in the subclass' initialization list.
        {
            cout << "SubClass: foo,bar parameter: " << foo << "," << bar << endl;
        }
};

int main(){
   SubClass c(10,20);
   return 0;
}
