#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "sorter.h"

using namespace std;

int main(){
  int place_holder;
  string str;
  int counter = 0;
  vector<int> all_numbers;

  ifstream in("randoms.txt");
  ofstream out("sorted.txt");

  if (!in){
    cout << "Cannot open input file." << endl;
    return 1;
  }
  if (!out){
    cout << "Cannot open output file." << endl;
    return 2;
  }

  while (getline(in, str)) {
    counter++;
    place_holder = atoi(str.c_str());
    // cout << counter << ": as int:  " << place_holder << endl;
    all_numbers.push_back(place_holder);
  }

  cout << &all_numbers;

  sort_vector(&all_numbers);

  for (int x = 0 ; x < all_numbers.size();x++){
    cout << x << " : " << all_numbers[x] << endl;
    out << all_numbers[x] << "\n";
  }

  in.close();
  out.close();
  return 0;
}
