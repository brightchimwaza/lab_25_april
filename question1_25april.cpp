#include <iostream>
#include <string>
using namespace std;

int main() {
    // Allocating an integer value dynamically
    int* pValueInt = new int;

    // Allocating a string value dynamically
    string* pValueStr = new string;

    // Prompting the user to enter integer values and assign or allocate those values dynamically
    cout << " Enter an integer: ";
    cin >> *pValueInt;
    cin.ignore();  // This function ignores the newline character left in the buffer

    // Prompting the user to enter string values and assign or allocate those values dynamically
    cout << " Enter the string: ";
    getline(cin, *pValueStr);

    // Output the values of the dynamically allocated integer and string
    cout << " Dynamically allocated integer value is: " << *pValueInt << endl;
    cout << " Dynamically allocated string value is: " << *pValueStr << endl;

    // Deallocating the memory to prevent memory leaks
    delete pValueInt;
    delete pValueStr;

    return 0;
}
