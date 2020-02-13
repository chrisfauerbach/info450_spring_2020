#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  char password1[100] = "";
  char password2[100] = "";
    cout << "Passwords MUST be the same AND ";
    cout << "password lengths must be at least 8 characters.";
    cout << endl;
  cout << "Please enter a password: ";
  cin.getline(password1,100);
  cout << "Please re-enter a password: ";
  cin.getline(password2,100);

  while (strcmp(password1, password2) || strlen(password1) < 8){
    cout << "Passwords MUST be the same AND ";
    cout << "password lengths must be at least 8 characters.";
    cout << endl;
    cout << "Please enter a password: ";
    cin.getline(password1,100);
    cout << "Please re-enter a password: ";
    cin.getline(password2,100);
  }
  cout << "Password was successful." << endl;
}
