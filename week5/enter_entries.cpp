#include <iostream>
#include <cstdio>
using namespace std;

class PhoneEntry
{
  private:
    char first_name[255]; // First Name
    char middle_initial[1]; // Middle Initial
    char last_name[255]; // Last Name
    char area_code[4]; // Area Code
    char phone_number[8]; // Phone Number
    bool is_private; // Kept private? Not printed?
  public:
    void set_first_name( char* in_name){ 
        strcpy(first_name, in_name);
    }
    void set_middle_initial(char* in_name){ strcpy(middle_initial, in_name);}
    void set_last_name( char* in_name){ strcpy(last_name, in_name);}
    void set_area_code( char* in_name){ strcpy(area_code, in_name);}
    void set_phone_number( char* in_name){ strcpy(phone_number, in_name);}
    void set_is_private(bool in_p){ is_private = in_p;}
    void printEntry(){
      if (!is_private){
       cout << last_name << ", ";
       cout << first_name << " " << (char)*middle_initial;
       cout << " ...... " ;
       cout << "(" << area_code << ") " << phone_number << endl;
     }
    }
};
int main()
{
  const int MAX = 2;
  //PhoneEntry entry;
  PhoneEntry entries[MAX];

  // entry.set_first_name("Chris");
  // entry.set_middle_initial(' ');
  // entry.set_last_name( "Fauerbach");
  // entry.set_area_code( "804");
  // entry.set_phone_number( "5392443");
  // entry.set_is_private(  false );
  // entry.printEntry();
  for (int x = 0; x< MAX;x++){
      cout << "Entry: " << x << endl;
      char *myvalue = (char *)malloc(255);

      cout << "Enter a first name: ";
      cin.getline(myvalue,255);
      entries[x].set_first_name(myvalue);
      cout << "Entered value: " << myvalue << endl;

      cout << "Enter a middle initial: ";
      cin.getline(myvalue,2);
      entries[x].set_middle_initial(myvalue);
      
      cout << "Enter a last name: ";
      cin.getline(myvalue,255);
      entries[x].set_last_name( myvalue );

      cout << "Enter an area code: ";
      cin.getline(myvalue,4);
      entries[x].set_area_code( myvalue);


      cout << "Enter a phone number: ";
      cin.getline(myvalue,8);
      entries[x].set_phone_number( myvalue );

      entries[x].set_is_private(  false );
  } 

  for (int x = 0; x< MAX;x++){
     entries[x].printEntry();
  }

  return 0;
}


