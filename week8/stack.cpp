#include <iostream>
#include <vector>
using namespace std;

class stack{
  private:
    vector<int> q; 
  public:
    stack();
    ~stack();
    void push(int i);
    int pop();
    void print();
};

stack::stack() { 
  cout << "Stack initialized." << endl;
}
stack::~stack(){
  cout << "Stack Destroyed." << endl;
}

void stack::push(int i){ 
  q.push_back(i);
  print();
}

int stack::pop(){
  int retval = -1;
  if (q.size()){
    retval = q.back();
    q.pop_back();
  }
  print();
  return retval;
}
void stack::print(){ 
   for (int i = 0;i < q.size();i++){
     printf ("[ %02d:%02d], ", i, q[i] );
   }
   cout << endl;
}
int main()
{
  stack my_stack;
  for (int x = 0;x< 20;x++){
    my_stack.push(x);
  }
  for (int x = 0;x< 20;x++){
    my_stack.pop();
  }
  cout << endl;   
}
