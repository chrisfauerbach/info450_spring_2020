/*
Get numbers from a user and square it.
CHF - Jan 27, 2019
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int input_variable = -1;
  while (1) {
    cout << "Please enter a number so I can square it! " << endl;
    cin >> input_variable;
    if (input_variable == 0){
      break;
    }
    cout << input_variable << " squared is " << pow(input_variable, 2) << endl;
  } 
  cout << "You entered 0, I'm out!" << endl;
  return 0;
}

