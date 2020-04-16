#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  int place_holder;
  ifstream in("randoms.txt");
  string str;
  int counter = 0;
  if (!in){
    cout << "Cannot open file." << endl;
    return 1;
  }

  while (getline(in, str)) {
    counter++;
    place_holder = atoi(str.c_str());
    cout << counter << ": as int:  " << place_holder << endl;
  }


  in.close();
  return 0;
}
