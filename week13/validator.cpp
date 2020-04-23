#include <iostream>
using namespace std;

void print_menu();
bool is_integer(const char* input);
bool is_bool(const char* input);
bool is_string(const char* input);
int main(){
  string user_input;
  string variable_type;
  string data_input;
  bool success = false;
  while (1){
    print_menu();
    getline(cin, user_input);
    cout << "User entered " << user_input << endl;
    if (user_input == "3"){
       break;    
    }
    
    if (user_input == "0"){
      variable_type = "string";
    } else if (user_input == "1"){
      variable_type = "boolean";
    } else if (user_input == "2"){
      variable_type = "integer";
    } 
    printf("Please input some data to see if it's a %s\n", variable_type.c_str());
    getline(cin, data_input);
     
    if (variable_type == "integer"){
       success = is_integer(data_input.c_str());
    } 
    if (variable_type == "boolean"){
       success = is_bool(data_input.c_str());
    } 
    if (variable_type == "string"){
       success = is_string(data_input.c_str());
    } 
    printf("Your input, %s, %s a %s\n", data_input.c_str(), success ? "is":"is not" , variable_type.c_str());
  }    

}

void print_menu(){
   cout << "Please select a data type (by number) below:" << endl;
   cout << "0. String" << endl;
   cout << "1. Boolean" << endl;
   cout << "2. Integer" << endl;
   cout << "3. (Exit)" << endl;
}

bool is_integer(const char* input){
  char * pEnd;
  long int li1, li2, li3, li4;
  li1 = strtol (input,&pEnd,10); 
  // cout << "Found number is: " << li1 << endl;
  // cout << "pEnd: [" << pEnd << "]\n";
  return *pEnd==0;
}

bool is_bool(const char* input){
    // cout << "Is true: " << strcmp(input, "true") << endl;
    // cout << "Is false: " << strcmp(input, "false") << endl;

    if (strcmp(input, "true") == 0) return true;
    if (strcmp(input, "false") == 0) return true;
    return false;
}

bool is_string(const char* input){
  return strlen(input) > 0;
}


