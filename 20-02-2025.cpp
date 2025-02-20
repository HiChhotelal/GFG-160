class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        priority_queue<int> left;  // Max-heap for the left half
      priority_queue<int, vector<int>, greater<int>> right;  // Min-heap for the right half
      vector<double> medians;
  
      for (int num : arr) {
          // Step 1: Insert number
          if (left.empty() || num <= left.top()) {
              left.push(num);
          } else {
              right.push(num);
          }
  
          // Step 2: Balance heaps
          if (left.size() > right.size() + 1) {
              right.push(left.top());
              left.pop();
          } else if (right.size() > left.size()) {
              left.push(right.top());
              right.pop();
          }
  
          // Step 3: Get median
          if (left.size() == right.size()) {
              medians.push_back((left.top() + right.top()) / 2.0);
          } else {
              medians.push_back(left.top());
          }
      }
  
      return medians;
    }
};
