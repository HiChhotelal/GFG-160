#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        // Sort the citations in descending order
        sort(citations.rbegin(), citations.rend());
        
        int h = 0;
        // Iterate to find the maximum H-index
        for (int i = 0; i < citations.size(); i++) {
            if (citations[i] >= i + 1) {
                h = i + 1;
            } else {
                break;
            }
        }
        return h;
    }
};
