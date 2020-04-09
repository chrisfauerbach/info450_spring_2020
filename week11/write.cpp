#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ofstream out("test");
  if (!out) {
     cout << "Cannot open file." << endl;
     return 1;
  }
  out << 10 << " " << 123.23 << endl; 
  out << "This is a short text file." << endl;
  out.close();
  return 0;
}
