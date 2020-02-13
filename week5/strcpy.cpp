#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  char s1[100] = "";
  char s2[100] = "Joseph";

  strcpy(s1, s2);

  cout << "s1: *" << s1 << "* and s2: *" << s2 << "*" << endl;
  return 0;
}

