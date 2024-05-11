#include <iostream>
using namespace std;

void array_times2(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] *= 2;
    }
}

int main() {
   int k;
  
   cout << "tell me your array size ";
    cin >> k;
    int array[k];


    cout << "Enter " << k <<  " numbers: " << endl;
    for (int i = 0; i < k; i++) {
        cin >> array[i];
    }

    array_times2(array, k);

    cout << "get your answer: ";
    for (int i = 0; i < k; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
