#include <iostream>
#include <cmath>

using namespace std;
 

void incrementMyNumberByValue(int value);
void incrementMyNumberByReference(int &value);
int main(){
    int x = 0;
    int i = 0;
    int y = 1;
    int q = 3;


     incrementMyNumberByReference(x);
     incrementMyNumberByReference(i);
     incrementMyNumberByReference(y);
     incrementMyNumberByReference(q);


    cout << "main.1 : " << x << endl;
    incrementMyNumberByValue(x);
    cout << "main.2 : " << x << endl;
    
    x = 0;
    cout << "main.3 : " << x << endl;
    incrementMyNumberByReference(x);
    cout << "main.4 : " << x << endl;
    

   return 0;
}
void incrementMyNumberByValue(int value){
    cout << "ibv.1: " << value << endl;
   value++;
   cout << "ibv.2: " << value << endl;
}

void incrementMyNumberByReference(int &value){
    cout << "ibr.1: " << value << endl;
   value++;
   cout << "ibr.2: " << value << endl;
}
