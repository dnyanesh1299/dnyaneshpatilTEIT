class solution{
publlc:
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
};

