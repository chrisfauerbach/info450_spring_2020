#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  char password1[100] = "";
  char password2[100] = "";


  do {
    if (password1[0] != 0){
        cout << "Entered passwords are not the same. Try again." << endl;
    } 
    cout << "Entered passwords are not the same. Try again." << endl;
    cout << "Enter password: ";
    cin.getline(password1, 100);
    cout << "Re-Enter password: ";
    cin.getline(password2, 100);
  } while(strcmp(password1, password2));
  
  cout << "Passwords are the same. Match succeeded." << endl;
  return 0;
}
