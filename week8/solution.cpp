#include <iostream>
#include <cstdio>
using namespace std;

class Employee
{
  private:
    char first_name[255]; // First Name
    char last_name[255]; // Last Name
    bool hourly_employee = false; // Is hourly?
    double compensation = 0.0; // $$$
  public:
    void set_compensation ( double in_comp){ 
        compensation = in_comp;
    }
    void set_first_name(char* in_name){ strcpy(first_name, in_name);}
    void set_last_name( char* in_name){ strcpy(last_name, in_name);}
    void set_is_hourly(bool in_h){ hourly_employee = in_h;}
    void printEntry(){
       cout << first_name << " ";
       cout << last_name << " ";
       if (hourly_employee){
         cout << "h$" << compensation * 2000.0 << endl;
       } else {
         cout << "e$" << compensation  << endl;
       }
    }
};
int main()
{
  const int MAX = 3;
  Employee entries[MAX];
  for (int x = 0; x< MAX;x++){
      char *myvalue = (char *)malloc(255);
      cout << "Working on user: " << x << endl;
      cout << "Enter a first name: ";
      cin.getline(myvalue,255);
      entries[x].set_first_name(myvalue);
      cout << "Enter a last name: ";
      cin.getline(myvalue,255);
      entries[x].set_last_name( myvalue );
      cout << "Enter EXEMPT or HOURLY: ";
      cin.getline(myvalue,10);
      entries[x].set_is_hourly( strcmp(myvalue, "HOURLY") == 0 );
      cout << "Enter compensation (per hour if hourly, annual for EXEMPT): ";
      cin.getline(myvalue,255);
      entries[x].set_compensation(  stod(myvalue) );
  } 

  for (int x = 0; x< MAX;x++){
     entries[x].printEntry();
  }

  return 0;
}


