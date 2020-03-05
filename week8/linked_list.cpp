#include <iostream>
using namespace std;


class node{
  public:
    int data;
    node *next;
    node(){
        next = NULL;
    }
    void insert_number(int number);
    bool contains(int number);
    void print_in_order(); 
    void print_data();
};










void node::print_data(){
    cout << data << endl;
    next->print_data();
}
















void node::insert_number(int number){
     if (next == NULL){
         next = new node;
         next->data = number; 
     }else{
         next->insert_number(number);
     }
}



bool node::contains(int number){ 
    if (data == number){
        return true;
    }
    if (next != NULL){
        return next->contains(number);
    }
    return false;
}
 
void node::print_in_order(){
    cout << data << endl;
    if (next != NULL){
        next->print_in_order();
    }
}



int main(){
    node linked_list;
    linked_list.data = 0;
    cout << "Print in order." << endl;
    linked_list.insert_number(10);
    linked_list.insert_number(6);
    linked_list.insert_number(98);
    linked_list.insert_number(33); 
    linked_list.insert_number(55);
    linked_list.print_in_order();   
    return 0;
}