class Solution {
public:
    stack<pair<int, int>> st;

    Solution() { }

    // Add an element to the top of Stack
    void push(int x) {
        int currentMin = st.empty() ? x : min(st.top().second, x);
        st.push({x, currentMin});
    }

    // Remove the top element from the Stack
    void pop() {
        if (!st.empty()) {
            st.pop();
        }
    }

    // Returns top element of the Stack
    int peek() {
        return st.empty() ? -1 : st.top().first;
    }

    // Finds minimum element of Stack
    int getMin() {
        return st.empty() ? -1 : st.top().second;
    }
};
