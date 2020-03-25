#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void bubble_sort(vector<int> *v_ptr);

int main(){
    vector<int> my_vector; // Create vector for 'string's
    for (int x = 0;x < 10;x++){
        my_vector.push_back(rand() % 100);
    }
    for (int i = 0; i < my_vector.size(); i++){
       cout << my_vector[i] << " - ";
    }
    cout << endl;
    
    bubble_sort(&my_vector);
    for (int i = 0; i < my_vector.size(); i++){
       cout << my_vector[i] << " - ";
    }
    cout << endl;
    
}

void bubble_sort(vector<int> *v_ptr){
   //Get the size of the vector
   int length = v_ptr->size();

   //Loop the vector from 0 to TWO less than the length
   for (int i = 0;i < length - 1;i++){

      // Little tricky, but you'll see, we effectively loop and swap
      // from the bottom to the top, 'shoving' the smallest number up
      for (int j = 0;j < length - i - 1;j++){
          if (v_ptr->at(j) > v_ptr->at(j+1)){
            int temp = v_ptr->at(j);
            v_ptr->at(j) = v_ptr->at(j+1);
            v_ptr->at(j+1) = temp;
          }
      }
   }

}
