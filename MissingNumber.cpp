#include <iostream>
#include <vector>
using namespace std;

int missingNumber(const vector<int>& nums) {
    int n = nums.size();
    int expectedSum = (n * (n + 1)) / 2;  // Sum of numbers from 0 to n
    int actualSum = 0;

    // Calculate the sum of elements in the array
    for (int num : nums) {
        actualSum += num;
    }

    // The missing number is the difference between expectedSum and actualSum
    return expectedSum - actualSum;
}

int main() {
    // Test cases
    vector<int> nums1 = {3, 0, 1};
    cout << "Missing number: " << missingNumber(nums1) << endl;  // Expected: 2

    vector<int> nums2 = {0, 1};
    cout << "Missing number: " << missingNumber(nums2) << endl;  // Expected: 2

    vector<int> nums3 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    cout << "Missing number: " << missingNumber(nums3) << endl;  // Expected: 8

    return 0;
}
