#include <iostream>
#include <vector>
using namespace std;

class queue{
  private:
    vector<int> q; 
  public:
    queue();
    ~queue();
    void enqueue(int i);
    int dequeue();
    void print();
};

queue::queue() { 
  cout << "Queue initialized." << endl;
}
queue::~queue(){
  cout << "Queue Destroyed." << endl;
}

void queue::enqueue(int i){ 
  q.push_back(i);
  print();
}

int queue::dequeue(){
  int retval = -1;
  if (q.size()){
    retval = q.at(0);
    q.erase(q.begin() + 0);
  }
  print();
  return retval;
}
void queue::print(){ 
   for (int i = 0;i < q.size();i++){
     printf ("[ %02d:%02d], ", i, q[i] );
   }
   cout << endl;
}
int main()
{
  queue my_queue;
  cout << my_queue.dequeue() << endl; 
  for (int x = 0;x< 20;x++){
    my_queue.enqueue(x);
  }
  for (int x = 0;x< 20;x++){
    for (int y = 0; y < x;y++){
      cout << "----------";
    }
    my_queue.dequeue();
  }
  cout << endl;   
}
