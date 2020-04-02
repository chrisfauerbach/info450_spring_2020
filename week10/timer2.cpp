//Build a clock class
// When the 'run' function is called, the program counts down to zero
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class timer{
  private:
    int seconds;
  public:
    timer(const char *t){ seconds = atoi(t); }
    timer(int t) { seconds = t;}
    timer(int mins, int secs){ seconds = 60 * mins  + secs;}
    void run();
};
void timer::run(){
  clock_t t1 = clock();
  cout << "Sleeping for " << seconds << " " << flush;
  while ((clock() / CLOCKS_PER_SEC - t1 / CLOCKS_PER_SEC) < seconds);
  cout << "Done\a" << endl << flush; // ring the bell
}
int main(){

   char str[80];
   cout << "Enter number of seconds: " ;
   cin >> str;
   timer a(str);
   a.run();

}
