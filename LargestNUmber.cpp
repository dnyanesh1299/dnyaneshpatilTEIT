#include <iostream>
#include <vector>
using namespace std;

int largestElement(const vector<int>& arr) {
    // Initialize maxElement with the first element of the array
    int maxElement = arr[0];

    // Traverse the array starting from the second element
    for (int i = 1; i < arr.size(); i++) {
        // Update maxElement if a larger element is found
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    return maxElement;
}

int main() {
    // Test cases
    vector<int> arr1 = {1, 8, 7, 56, 90};
    vector<int> arr2 = {5, 5, 5, 5};
    vector<int> arr3 = {10};

    cout << "Largest element in arr1: " << largestElement(arr1) << endl;  // Output: 90
    cout << "Largest element in arr2: " << largestElement(arr2) << endl;  // Output: 5
    cout << "Largest element in arr3: " << largestElement(arr3) << endl;  // Output: 10

    return 0;
}
