#include <iostream>
using namespace std;

class queue{
  public:
    static const int max = 10;
    int first;
    int size;
    int q[max];
    void print(){
      cout << "PRINTING: ";
      for (int x = 0;x < size;x++){
        cout << q[(first + x) % max] << ", ";
      }
      cout << endl;
    }
    void put(int x){
      q[size]  = x;      
      size++;
    }
    int get(){
      int retval = 0;
      retval = q[first]; 
      first++;
      size--;
      return retval;  
    } 
    queue(){
      first = 0;
      size = 0; 
      for (int x = 0;x < max;x++){ q[x] = 0;}
    }

};

int main(){
   queue my_queue;
   my_queue.print();//What's in my queue here?
   my_queue.put(1); 
   my_queue.put(2); 
   my_queue.put(3); 
   my_queue.put(4); 
   my_queue.put(5); 
   my_queue.put(6); 
   my_queue.print() ;
   cout << "GET: " << my_queue.get() << endl;
   my_queue.print() ;
   cout << "GET2: " << my_queue.get() << endl;
   my_queue.print() ;
   cout << "GET3: " << my_queue.get() << endl;
   my_queue.print() ;
   cout << endl;
   return 0;
}
