#include <iostream>
using namespace std;

int factorial(int x){
   if (x == 1){
    return x;
   } 
   return x * (factorial (x-1));
}
 
int cheating_factorial(int x){
 int y = 1;
 for (   ;x >= 1;x--){
   y*=x;
 }
 // while (x >= 1){
   // y *= x--;
 // }
 return y;
}
int main()
{
  cout << factorial(8) << endl;
  cout << cheating_factorial(8) << endl;
  return 0;

}
