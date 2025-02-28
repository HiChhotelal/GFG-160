class Solution {
public:
    int evaluate(vector<string>& arr) {
        stack<int> st;
        
        for (string& token : arr) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top(); st.pop();  // Second operand
                int a = st.top(); st.pop();  // First operand
                
                if (token == "+") st.push(a + b);
                else if (token == "-") st.push(a - b);
                else if (token == "*") st.push(a * b);
                else if (token == "/") st.push(a / b);  // Integer division
                
            } else {
                // Convert operand from string to integer and push
                st.push(stoi(token));
            }
        }
        
        return st.top();  // Final result
    }
};
