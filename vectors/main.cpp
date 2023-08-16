#include <iostream>
#include <vector>

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

  // Print the values of the vector.
  for (int i = 0; i < 5; i++) {
    cout << "The value of element " << i << " is " << arr[i] << endl;
  }

  // Clean up: Delete the dynamically allocated memory
  for (int* ptr : arr) {
      delete ptr;
  }


  return 0;
}