class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
         string final = s1 + s1;
        
        // finding s2 in final string
        if(final.find(s2) != string::npos){
            return true;
        }
        // if not found return false
        return false;
    }
};