/*
Determine if this is a prime number or not.
CHF - Jan 27, 2019
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int input_variable = -1;
  bool is_prime = 0;
  while (1) {
    cout << "Please enter a number so I can determine if it's prime or not." << endl;
    cin >> input_variable;
    if (input_variable == 0){
      break;
    }
    is_prime = 1;
    for (int x = 2;x < input_variable;x++){
      if (input_variable % x == 0){
        is_prime  = 0;
      }
    }
    if (is_prime){
      cout << input_variable << " IS a prime number!" << endl;
    } else {
      cout << input_variable << " is NOT prime number." << endl;
    }
  } 
  cout << "You entered 0, I'm out!" << endl;
  return 0;
}

