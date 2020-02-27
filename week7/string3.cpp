#include <iostream>
#include <string>

using namespace std;

int main () {

   string str1 = "She sells sea shells by the sea shore.";
   
   cout << "str1.find(\"she\") :  " << str1.find("she") << endl; 
   cout << "string::npos - " << string::npos << endl;
   cout << "str1.find(\"wood\") :  " << str1.find("wood") << endl; 
   cout << "str1.find(\"wood\") :  " << (str1.find("wood") == string::npos) << endl; 

   return 0;
}
