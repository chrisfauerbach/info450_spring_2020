#include <iostream>
#include <cstdio>
using namespace std;

class PhoneEntry
{
  public:
    char first_name[255]; // First Name
    char middle_initial; // Middle Initial
    char last_name[255]; // Last Name
    char area_code[4]; // Area Code
    char phone_number[8]; // Phone Number
    bool is_private; // Kept private? Not printed?
    void set_first_name( char* in_name){ 
        strcpy(first_name, in_name);
    }
    void set_middle_initial(char in_name){ middle_initial= in_name;}
    void set_last_name( char* in_name){ strcpy(last_name, in_name);}
    void set_area_code( char* in_name){ strcpy(area_code, in_name);}
    void set_phone_number( char* in_name){ strcpy(phone_number, in_name);}
    void set_is_private(bool in_p){ is_private = in_p;}
    void printEntry(){
      if (!is_private){
       cout << last_name << ", ";
       cout << first_name << " " << middle_initial;
       cout << " ...... " ;
       cout << "(" << area_code << ") " << phone_number << endl;
     }
    }
};
int main()
{
  PhoneEntry entry;
  strcpy(entry.first_name, "chris");
  //entry.set_first_name("Chris");
  entry.set_middle_initial(' ');
  entry.set_last_name( "Fauerbach");
  entry.set_area_code( "804");
  entry.set_phone_number( "5392443");
  entry.set_is_private(  false );
  entry.printEntry();

  return 0;
}


