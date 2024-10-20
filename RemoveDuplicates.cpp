#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;  // Handle empty array

    int k = 1;  // Start with the first unique element at index 0

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] != nums[k - 1]) {  // Check if current element is unique
            nums[k] = nums[i];  // Place it at the next unique position
            k++;  // Increment the count of unique elements
        }
    }

    return k;  // Return the number of unique elements
}

int main() {
    // Test cases
    vector<int> nums1 = {1, 1, 2};
    int k1 = removeDuplicates(nums1);
    cout << "k = " << k1 << ", nums = [";
    for (int i = 0; i < k1; ++i) cout << nums1[i] << (i < k1 - 1 ? ", " : "");
    cout << "]" << endl;  // Expected: k = 2, nums = [1, 2]

    vector<int> nums2 = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k2 = removeDuplicates(nums2);
    cout << "k = " << k2 << ", nums = [";
    for (int i = 0; i < k2; ++i) cout << nums2[i] << (i < k2 - 1 ? ", " : "");
    cout << "]" << endl;  // Expected: k = 5, nums = [0, 1, 2, 3, 4]

    return 0;
}
