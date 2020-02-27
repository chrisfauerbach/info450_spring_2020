#include <iostream>
#include <string> 
#include <vector>
using namespace std;
void print_vec(vector<string> *v_ptr);

int main(){
  vector<string> my_strings; // Create vector for 'string's
  string s = string("foo");// Create first string, foo
  string s2;
  print_vec(&my_strings); // print the vector, empty
  my_strings.push_back(s); // add 'foo'
  print_vec(&my_strings); // print with only 'foo'
  s = string("bar"); // new string bar
  my_strings.push_back(s); // add to end 'bar'
  print_vec(&my_strings); // print with 'foo','bar'
  s = string("FIRST!"); // new string first
  my_strings.insert(my_strings.begin()+0, s);
  print_vec(&my_strings); // print 'FIRST!', 'foo','bar'
  s2 = my_strings.back(); // Get the 'last' element
  my_strings.pop_back(); // CLEAR the last element
  cout << "... and the last element: " << s2 << endl;
  print_vec(&my_strings);
}
void print_vec(vector<string> *v_ptr){
    cout << "Vector: ";
    for (int x = 0;x < v_ptr->size();x++){
        cout << x << ": " << v_ptr->at(x) << ", ";
    }
    cout << endl;
}