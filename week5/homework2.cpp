#include <iostream>
#include <stdio.h>
using namespace std;

const int MAX_STUDENTS = 30;
const int MAX_SIZE = 255;
int main(){
  int x = 0;
  int count  = 0;
  char students[MAX_STUDENTS][MAX_SIZE];
  for(x = 0;x < MAX_STUDENTS;x++){
    strcpy(students[x], "");
  }
  for(x = 0;x < MAX_STUDENTS;x++){
    cout << "Please enter student for index " << x << " :";
    cin.getline(students[x], MAX_SIZE);
    if (!strcmp("0", students[x]) ){
      cout << "Got a 0, breaking." << endl;
      break;
    } 
    count++ ;
  }
  for(x = 0;x < count;x++){
    cout << "students[" << x << "] = " << students[x] << endl;
  }
}
