#include <iostream>
using namespace std;

int main(){
  int two_d_array[2][3] = { {1,2,3}, {4,5,6}   };
  int row;
  int col;
  // char my_one[] = "Chris is teaching.";
   //my_one = "lkjasldfkjlaskdfjlkasdlkfjlaskjfdjlaksjdf";
   //cout << my_one << endl;

  char new_array[20] = "Chris";
  int len = 20;
  for (row = 6; row < len;row++){
    new_array[row]='a';
  } 
  cout << "*" << new_array << "*" <<  endl;
  for (row = 0; row < len;row++){
    cout << "*" << new_array[row] << "*" << endl;
  } 
  new_array[5] = 'a';
  cout << "*" << new_array << "*" <<  endl;
}
