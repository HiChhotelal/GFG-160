#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int lis(vector<int>& arr) {
        if (arr.empty()) return 0;

        vector<int> lisSeq; // Stores the smallest possible increasing subsequence

        for (int num : arr) {
            auto it = lower_bound(lisSeq.begin(), lisSeq.end(), num);
            if (it == lisSeq.end()) {
                lisSeq.push_back(num); // Extend the sequence
            } else {
                *it = num; // Replace the element to maintain the smallest LIS
            }
        }
        return lisSeq.size();
    }
};

// Driver Code
int main() {
    Solution obj;
    vector<int> arr = {5, 8, 3, 7, 9, 1};
    cout << "Length of LIS: " << obj.lis(arr) << endl;
    
    vector<int> arr2 = {0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15};
    cout << "Length of LIS: " << obj.lis(arr2) << endl;
    
    vector<int> arr3 = {3, 10, 2, 1, 20};
    cout << "Length of LIS: " << obj.lis(arr3) << endl;

    return 0;
}
