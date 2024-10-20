#include <iostream>
#include <vector>
using namespace std;

int secondLargest(const vector<int>& arr) {
    if (arr.size() < 2)  // Array needs atleast 2 elements
        return -1;

    int largest = -1, second_largest = -1;  // Initialize both to -1

    for (int num : arr) {
        if (num > largest) {
            second_largest = largest;  // Update second largest to previous largest
            largest = num;  // Update largest to current number
        } else if (num > second_largest && num != largest) {
            second_largest = num;  // Update second largest if smaller than largest but not equal
        }

    }
    if (second_largest == -1)  // If no valid second largest found
        return -1;

    return second_largest;

}

int main() {
    // Test cases
    cout << secondLargest({12, 35, 1, 10, 34, 1}) << endl;  // Expected: 34
    cout << secondLargest({10, 10}) << endl;  // Expected: -1
    cout << secondLargest({5}) << endl;  // Expected: -1
    cout << secondLargest({4, 4, 4, 4}) << endl;  // Expected: -1
    return 0;
}
