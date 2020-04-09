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
