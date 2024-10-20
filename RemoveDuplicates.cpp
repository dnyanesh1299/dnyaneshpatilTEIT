class Solution{
public:
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
};
