#include <iostream>
using namespace std;
int main() {
    int n;

    // Ask the user for the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Check for invalid input
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number of elements." << endl;
        return 1;
    }

    // Declare an array of size 'n'
    int arr[n];

    // Ask the user to enter the elements of the array
    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize a variable to store the sum
    int sum = 0;

    // Calculate the sum of all elements in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Display the sum
    cout << "Sum of all elements in the array: " << sum << endl;

    return 0;
}

