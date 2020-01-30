#include <iostream>
using namespace std;
int main(){
  int two_d_array[2][3] = { {1,2,3}, {4,5,6}};
  int row;
  int col;

  for (row = 0;row < 2;row++){
      for (col = 0;col < 3;col++){
          cout << "Row[" << row << "] Column[" << col << "] " << two_d_array[row][col] << endl;
          
      }
  }
  return 0;
}   

