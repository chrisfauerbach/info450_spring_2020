#include <iostream>
#include <cmath>
using namespace std;
const int MAX_NUMBERS = 10;
int main(){
  int x = 0, sum = 0;
  float mean, std_dev, temp_float = 0;
  int all_numbers[MAX_NUMBERS];
  float each_numbers[MAX_NUMBERS];
  for (x = 0;x < MAX_NUMBERS;x++){
    cout << "Enter the number for index " << x << ": ";
    cin >> all_numbers[x];
  }
  for (x = 0;x < MAX_NUMBERS;x++){
    cout << "[" << all_numbers[x] << "] ";
  }
  for (x = 0;x < MAX_NUMBERS;x++){
    sum += all_numbers[x];
  }
  mean = (float) sum / MAX_NUMBERS;
  cout << endl << "Mean is: " << mean << endl;
  for (x = 0;x < MAX_NUMBERS;x++){
    std_dev += pow((float)all_numbers[x] - mean, 2);
  }
  std_dev = std_dev / MAX_NUMBERS;
  std_dev = sqrt(std_dev);
  cout << "The std deviation is: " << std_dev << endl;
  return 0;
}
