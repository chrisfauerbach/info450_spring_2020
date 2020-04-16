#include <iostream>
using namespace std;

int factr(int n);

int main(){
 
  for (int x = 1;x < 10;x++){
     cout << x << " rec factorial is " << factr(x) << endl;
  }

}

int factr(int n){
  int answer;
  if (n == 1) return 1;
  answer = factr(n - 1) * n;
  return answer;
}


/*
factr -> 1   RETURN 1
factr -> 2     -> factr(2 - 1)  * 2
.
.
factr -> 5     -> factr(5 - 1) * 5
factr -> 6     -> factr(6 - 1) * 6
factr -> 7     -> factr(7 - 1) * 7 
factr -> 8     ->  factr(8 - 1) * 8 
factr -> 9     - > fact(9 -1) * 9
*/


