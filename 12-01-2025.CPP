class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code hint maxWater(vector<int>& arr) {
    int n = arr.size();

    // Left[i] contains height of tallest bar to the
    // left of i'th bar including itself
    vector<int> left(n);

    // Right[i] contains height of tallest bar to
    // the right of i'th bar including itself
    vector<int> right(n);

    int res = 0;

    // Fill left array
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1], arr[i]);

    // Fill right array
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1], arr[i]);

    // Calculate the accumulated water element by element
    for (int i = 1; i < n - 1; i++) {
        int minOf2 = min(left[i - 1], right[i + 1]);
        if (minOf2 > arr[i]) {
            res += minOf2 - arr[i];
        }
    }

    return res;
}
    
};