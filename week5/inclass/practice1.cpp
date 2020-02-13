#include <iostream>
#include <stdio.h>
using namespace std;

int letters_minus_whitespace(char value[]);
int main(){

   char str[] = "Some phrase of characters that I want to count.";
   cout << letters_minus_whitespace(str) << endl;

}
int letters_minus_whitespace(char value[]){
   int count = 0;
   cout << strlen(value) << endl;
   for(int i=0; i < strlen(value);i++){
     if (value[i] != ' '){
       count ++ ;
     }
   }
   return count;

}
