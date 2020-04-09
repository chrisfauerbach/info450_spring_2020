#include <iostream>
using namespace std;

int fact(int n);

int main(){
 
  for (int x = 1;x < 10;x++){
     cout << x << " factorial is " << fact(x) << endl;
  }

}

int fact(int n){
  int counter;
  int answer;

  for (counter = 1;counter <= n; counter ++){
     answer = answer * counter;
  }

  return answer;
}
