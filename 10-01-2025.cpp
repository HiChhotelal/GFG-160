class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
                vector<int> result;
        unordered_map<int, int> freq_map;
        int n = arr.size();

        // Initialize the first window
        for (int i = 0; i < k; ++i) {
            freq_map[arr[i]]++;
        }

        // Store the distinct count for the first window
        result.push_back(freq_map.size());

        // Slide the window
        for (int i = k; i < n; ++i) {
            // Add the new element at the end of the window
            freq_map[arr[i]]++;

            // Remove the element going out of the window
            int elem_to_remove = arr[i - k];
            if (freq_map[elem_to_remove] == 1) {
                freq_map.erase(elem_to_remove);
            } else {
                freq_map[elem_to_remove]--;
            }

            // Append the distinct count for the current window
            result.push_back(freq_map.size());
        }

        return result;
    
    }
};