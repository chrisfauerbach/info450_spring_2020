#include <iostream>
#include <stdio.h>
using namespace std;

int word_count(char value[]);
int main(){

   char str[] = "Some phrase of characters that I want to count             .";
   cout << word_count(str) << endl;

}
int word_count(char value[]){
   int count = 0;
   int word_count = 0;

   for (int x = 0; x < strlen(value); x++){
     if (value[x] != ' ' && value[x] != '\t'){
       word_count++;
     }else{ 
      //When does this happen? 
      if(word_count > 0){
        count ++; 
      }
      word_count = 0;
     }
   }
   if (word_count  > 0){
     count++;
   }

   return count;

}
