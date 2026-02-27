//Write a program to print the transpose of the matrix entered by the user.
#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int arr[row][col];

    cout << "Enter elements of the matrix:\n";
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nTranspose of the matrix:\n";
    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}