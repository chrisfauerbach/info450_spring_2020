#include <iostream>
using namespace std;
void getDimensions(int &width, int &height);
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
void getDimensions(int &length, int &width){
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter Length: ";
    cin >> length;
    return;
}
