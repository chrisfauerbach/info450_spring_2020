#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;
int main()
{
  int v1 = 0;
  int min = 1000000;
  int max = -1000000;
  int x = 0;
  srand (time(NULL));

  ofstream out("randoms.txt");
  if (!out) {
     cout << "Cannot open file." << endl;
     return 1;
  }
  for (x = 0; x < 100000000; x++){
    int v1 = rand() % 19999 - 9999;
    if (v1 >= 10000 || v1 <= -10000){
       cout << "ERROR WHILE GENERATING NUMBER: " << v1 << endl;
       break;
    } 
    if (v1 < min) min = v1;
    if (v1 > max) max = v1;
    if (x >= 1000) continue;
    out << v1 << endl;
  }
  // cout << "Generated " << x <<  " numbers: Min / Max :: " << min << " / " << max << endl;
  out.close();
  return 0;
}
