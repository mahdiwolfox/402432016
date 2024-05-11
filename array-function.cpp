#include <iostream>
using namespace std;

void array_times2(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] *= 2;
    }
}

int main() {
   int arraysize;
  
   cout << "tell me your array size ";
    cin >> arraysize;
    int array[arraysize];


    cout << "Enter " << arraysize <<  " numbers: " << endl;
    for (int i = 0; i < arraysize; i++) {
        cin >> array[i];
    }

    array_times2(array, arraysize);

    cout << "get your answer: ";
    for (int i = 0; i < arraysize; i++) {
        cout << array[i] << " ";
    }

    return 0;
}
