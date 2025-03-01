class Solution {
public:
    string decodedString(string &s) {
        stack<int> countStack;
        stack<string> stringStack;
        string currentString = "";
        int currentNum = 0;
        
        for (char c : s) {
            if (isdigit(c)) {
                currentNum = currentNum * 10 + (c - '0');
            } else if (c == '[') {
                countStack.push(currentNum);
                stringStack.push(currentString);
                currentNum = 0;
                currentString = "";
            } else if (c == ']') {
                int repeatTimes = countStack.top();
                countStack.pop();
                string temp = stringStack.top();
                stringStack.pop();
                
                while (repeatTimes--) {
                    temp += currentString;
                }
                currentString = temp;
            } else {
                currentString += c;
            }
        }
        return currentString;
    }
};
