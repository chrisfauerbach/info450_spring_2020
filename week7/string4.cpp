#include <iostream>
#include <string>

using namespace std;

int main () {

   string str1 = "She sells sea shells by the sea shore.";
   size_t no_position = string::npos;
   size_t string_length = str1.length();
   size_t found_pos = str1.find("she");
   
   
   cout << "string::npos  - " << string::npos << endl;
   cout << "no_position   - " << no_position << endl;
   cout << "str1.length() - " << str1.length() << endl;
   cout << "string_length - " << string_length << endl;
   cout << "find(\"she\") -  " << str1.find("she") << endl; 
   cout << "found_pos     - " << found_pos << endl;
 
   return 0;
}
