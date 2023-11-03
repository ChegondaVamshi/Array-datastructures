#include <iostream>
using namespace std;
int main() {
    int n;

    
    cout << "Enter the number of elements in the array: "<<"/n";
    cin >> n;

    
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive number of elements." << "/n";
        return 1;
    }

    
    int arr[n];


    cout << "Enter " << n << " elements of the array:" << "/n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int sum = 0;

    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    
    cout << "Sum of all elements in the array: " << sum <<"/n";

    return 0;
}

