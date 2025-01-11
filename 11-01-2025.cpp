class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
                unordered_map<char, int> charIndex; 
        int maxLength = 0; 
        int start = 0; // Start of the current window

        for (int end = 0; end < s.size(); ++end) {
            char currentChar = s[end];

           
            if (charIndex.find(currentChar) != charIndex.end() && charIndex[currentChar] >= start) {
                
                start = charIndex[currentChar] + 1;
            }

            
            charIndex[currentChar] = end;

           
            maxLength = max(maxLength, end - start + 1);
        }

        return maxLength;
    }
};