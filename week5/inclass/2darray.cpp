#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
   char one[] = {'C','h','r','i','s'};
   char two[] = {'C','h','r','i','s', '\0'};

   cout << strlen(one) << endl;
   return 0;
}
