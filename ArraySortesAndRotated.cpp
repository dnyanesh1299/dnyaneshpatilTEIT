class Solution{
public:
   bool checkRotatedSorted(const vector<int>& nums) {
    int n = nums.size();
    int countBreaks = 0;  // Count the number of places where the order breaks

    for (int i = 0; i < n; ++i) {
        // Check if the current element is greater than the next (modulo to wrap around)
        if (nums[i] > nums[(i + 1) % n]) {
            countBreaks++;
        }
    }

    // For a valid rotated sorted array, there should be at most one break in order
    return countBreaks <= 1;
}
};
