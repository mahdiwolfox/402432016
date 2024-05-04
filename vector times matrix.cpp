#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> vector = {1, 2, 3};
    std:: vector<int> result(3, 0);

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result[i] += matrix[i][j] * vector[j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}

// در واقع ضرب ماترس در بردار سه در سه، همون ضرب ماتریس سه در سه در ماتریس سه در یکه که نتیجه ما یک ماتریس سه در یک که بردار مورد نظرمونه  :)

//                                                        mohammad mahdi naghian 402432016