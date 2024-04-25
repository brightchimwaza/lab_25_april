#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    //prompting the user to enter the number of rows preffered with a restriction that there should not exceed 3
    cout << "Enter the number of rows (maximum of 3 rows): ";
    cin >> rows;

    //prompting the user to enter the number of columns with a restriction that there should not exceed 3
    cout << "Enter the number of columns (maximum of 3 columns): ";
    cin >> cols;

    // Checking if dimensions exceed 3
    if(rows > 3 || cols > 3) {
        cout << "Dimensions must not exceed 3. Try again." << endl;
        return 1;
    }

    // Allocating 2D array dynamically
    double** arrayName= new double*[rows];
    for(int i = 0; i < rows; ++i) {
        arrayName[i] = new double[cols];
    }

    // Assigning values to each element of the array
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> arrayName[i][j];
        }
    }

    // Outputing the values of each element of the array
    cout << "Array values entered are:" << endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << arrayName[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocating our array
    for(int i = 0; i < rows; ++i) {
        delete[] arrayName[i];
    }
    delete[] arrayName;

    return 0;
}
