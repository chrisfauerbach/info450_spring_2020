#include <iostream>
using namespace std;

void reverse(char *s);

int main(){

   char str[] = "this is a test"; // 0
   cout << "Reversed: ";
   reverse(str);
   cout << endl;
   return 0; 
}

void reverse(char *s){
  if (*s){
    reverse(s+1);
  }
  else{
    return; // takes you out of the function
  }
  cout << *s;
}
