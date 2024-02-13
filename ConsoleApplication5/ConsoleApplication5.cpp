#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double array[3][5];
    double m[3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Введите элемент массива: ";
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        double sum = 0.0;
        for (int j = 0; j < 5; j++) {
            sum = sum + array[i][j];
        }
        m[i] = sum / 5;
    }

    for (int i = 0; i < 3; i++) {
        cout << "\nСреднее арифметическое: " << m[i] << endl;
    }   

    return 0;
}
