

class Solution {
  public:
    int largest(vector<int> &arr) {
    
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

    };




