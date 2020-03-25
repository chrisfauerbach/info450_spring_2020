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
    for (unsigned int i = 0; i < my_vector.size(); i++){
       cout << my_vector.at(i) << " - ";
    }
    cout << endl;
    
    bubble_sort(&my_vector);
    for (unsigned int i = 0; i < my_vector.size(); i++){
       cout << my_vector.at(i) << " - ";
    }
    cout << endl;
    
}
void bubble_sort(vector<int> *v_ptr){
    //Get the size of the vector
    unsigned int length = v_ptr->size();
    //Begin a loop starting from the beginning
    for (unsigned int big_loop = 0;big_loop < length;big_loop++){
        // Starting at the index number from the outter loop,
        // Let's find the 'smallest' number in the remaining numbers
        int smallest_index = big_loop;
        for (unsigned int inner_loop = big_loop;inner_loop < length;inner_loop++){
            // cout << "Moving to inner " << inner_loop << endl;
            if (v_ptr->at(inner_loop) < v_ptr->at(smallest_index)){
                smallest_index = inner_loop;
            }
        }
        //Once we find the smallest number, we 'move' it to the beginning (outter loop)
        int temp = v_ptr->at(big_loop);
        v_ptr->at(big_loop) = v_ptr->at(smallest_index);
        v_ptr->at(smallest_index) =  temp;
    }
}
