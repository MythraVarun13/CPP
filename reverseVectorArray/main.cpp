#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

     vector<int*> arr; // Declare a vector of int pointers

    // Input values from the user and store them in the vector
    cout << "Enter " << size << " integer values:\n";
    for (int i = 0; i < size; ++i) {
        int value;
        cin >> value;
        arr.push_back(new int(value)); // Allocate memory for each element
    }

    cout << "\nOriginal Array:\n";
    for (int* ptr : arr) {
        cout << *ptr << " ";
    }

    // Reverse the pointers themselves, not just the elements
    for (size_t i = 0; i < size / 2; ++i) {
        swap(arr[i], arr[size - i - 1]);
    }

    cout << "\n\nReversed Array:\n";
    for (int* ptr : arr) {
        cout << *ptr << " ";
    }

    // Print whether the addresses of the original and reversed arrays are the same
    cout << "\n\nAddresses Comparison:\n";
    for (size_t i = 0; i < size; ++i) {
        cout << "Original: " << arr[i] << " | Reversed: " << arr[size - i - 1]
                  << " | Addresses Match: " << (arr[i] == arr[size - i - 1] ? "Yes" : "No")
                  << endl;
    }

    // Clean up: Delete the dynamically allocated memory
    for (int* ptr : arr) {
        delete ptr;
    }

    return 0;
}
