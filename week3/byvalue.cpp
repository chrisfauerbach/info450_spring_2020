#include <iostream>
using namespace std;

int AddTwoNumbers(int input_number, int second_number);

int main(){
    int one = 0;
    int two = 0;
    int result = 0;
    char answer = 'Y';
    do{
        
        cout << "Enter one: ";
        cin >> one;
        cout << "Enter Length: ";
        cin >> two;
        result = AddTwoNumbers(one, two);
        cout << one << " + " << two << " = " << result << endl;
        cout << "Another one? enter Y or N: " << endl;
        cin >> answer;
    } while ((answer=='Y') || (answer == 'y'));
    return 0;
}
int AddTwoNumbers(int input_number, int second_number){
    input_number += second_number;
    return input_number;
}
