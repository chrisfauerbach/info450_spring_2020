#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
  const int MAX = 255;
  char line[MAX]; 
  int count = 0;
  int x = 0;
  cout << "Please enter a line of text: " << endl;
  cin.getline(line, MAX);
  
  while (line[x] != 0){
    count++;
    x++;
  }
  cout << "There are " << count << " characters in your string of: " << line << endl;
  return 0;
}
