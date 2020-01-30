#include <iostream>
using namespace std;

int main(){
    int integer_array[5] = {1,2,3,4,5};
    int i;
    for (i = 0; i < 5;i++){
        cout << "Value at position " << i << " " << integer_array[i] << endl;
        integer_array[i]++;
    }

    for (i = 0; i < 5;i++){
        cout << "New Value at position " << i << " " << integer_array[i] << endl;
    }
}

