/*
Determine if this is a leap year.
CHF - Jan 27, 2019
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

  int input_variable = -1;
   
  while (1) {
    cout << "Year, so I can determine if it's a leap." << endl;
    cin >> input_variable;
    if (input_variable == 0){
      break;
    }
    /*
    The year can be evenly divided by 4
    If the year can be divided by 100 it is NOT a leap year, unless
    The year is also evenly divisible by 400, then it is a leap year.
    2000 and 2400 are leap years
    1800 and 1900 are not leap years
  */

 cout << (input_variable % 4 == 0) << endl;
 cout << (input_variable % 100 == 0) << endl;
 cout << (input_variable % 400 == 0) << endl;

 
  if (input_variable % 100 == 0 && !( input_variable % 400 == 0)){
     cout << "This is not a leap year." << endl; 
  }else if( input_variable % 4 == 0 ){
    cout << "This is a leap year." << endl; 
  }else{
    cout << "This is not leap year." << endl;
  }
    
  } 
  cout << "You entered 0, I'm out!" << endl;
  return 0;
}

