#include <iostream>
using namespace std;

class stack{

  public:
    static const int max = 10;
    int size;
    int s[max];
    stack(){
      size = 0;
    } 
    void push(int i){
      s[size] = i;
      size++;
    }
    int pop(){
      int retval = s[--size];
      return retval;
    }
    void print(){
      cout << "Printing: ";
      for (int x = 0;x<size;x++){
        cout << s[x] << ", ";
      } 
      cout << endl;
    }

};

int main(){
  stack mystack;
  mystack.push(1);
  mystack.push(2);
  mystack.push(3);
  mystack.push(4);
  mystack.print();
  cout << "MY POP: " << mystack.pop() << endl;
  mystack.print();

}
