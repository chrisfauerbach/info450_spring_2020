
#include <iostream>
using namespace std;

void getDimensions(int length, int width);

int main(){
    int length = 0;
    int width = 0;
    char answer;

    do{
        getDimensions(length, width);
        cout << "Dimensions: " << length << " " << width << endl;
        cout << "Another one? enter Y or N: " << endl;
        cin >> answer;
    } while ((answer=='Y') || (answer == 'y'));

    return 0;
}

void getDimensions(int length, int width){
    static int count_calls = 0;
    cout << "Enter width: " << endl;
    cin >> width;
    cout << "Enter length: " << endl;
    cin >> length;
    count_calls += 1;
    cout << "Number of times this function was called: " << count_calls << endl;
    return;
    
}


