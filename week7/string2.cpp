#include <iostream>
#include <string>

using namespace std;

int main () {

   string str1 = "Why don't we play?";
    
   cout << "str1.size() :  " << str1.size() << endl;
   cout << "str1.length() :  " << str1.length() << endl;
   cout << "str1.max_size() :  " << str1.max_size() << endl;
   cout << "str1.capacity() :  " << str1.capacity() << endl;
   cout << "str1.empty() :  " << str1.empty() << endl;
   cout << "str1.clear() :  " << endl;
   str1.clear();
   cout << "str1.empty() :  " << str1.empty() << endl;

   return 0;
}
