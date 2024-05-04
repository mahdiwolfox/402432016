#include <iostream>
using namespace std;

int determinant(int matrix[3][3]);

int main() {
    int matrix[3][3] = {{1, 2, 0}, {4, 5, 6}, {7, 8, 9}};
    int det = determinant(matrix);
    cout << "Determinant of the matrix is: " << det << endl;
    return 0;
}

int determinant(int matrix[3][3]) {
    int det = 0;
    for (int i = 0; i < 3; i++) {
        det = det + (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }
    return det;
}
