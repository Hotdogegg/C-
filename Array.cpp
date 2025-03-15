#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;  // Array size
    int numbers[SIZE];   // Declare an integer array

    // Input numbers
    cout << "Please enter " << SIZE << " numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Output numbers
    cout << "The numbers you entered are: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
