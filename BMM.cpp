# include <iostream>

using namespace std;


int BMM(int parametr1, int parametr2) {
    while (parametr2 != 0) {
        int M = parametr2;
        parametr2 = parametr1 % parametr2;
        parametr1 = M;
    }
    return parametr1;
}

int main() {
    int num1, num2;

    cout << "enter 2 numbers: " << endl;
    cin >> num1;
    cin >> num2;

    int result = BMM(num1, num2);

    cout << "B-M-M 2 adad hast: " << result << endl;

    return 0;
}

//                                                       402432016 - mohammad mahdi naghian

