#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n = 1000;
    ofstream out;
    out.open("randoms");
    for(int i = 0; i < n; )
    {
        out << rand() % 20000 -9999 << endl;
    }
    return 0;
}
