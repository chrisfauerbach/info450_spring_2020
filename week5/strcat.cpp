#include <iostream>
#include <cstdio>
using namespace std;

int main(){
  char firstName[] = "Mickey";
  char lastName[] = "Mouse";
  char fullName[100] = "";
  strcat(fullName, firstName);
  strcat(fullName, " ");
  strcat(fullName, lastName);

  cout << "Full Name is: " << fullName << endl;
  return 0;
}

