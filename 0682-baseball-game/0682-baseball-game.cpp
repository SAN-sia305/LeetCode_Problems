class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stk;
        
        for (string s : operations) {
            if (s == "+") {
                // Add the sum of the last two scores
                int top = stk.top(); stk.pop();
                int newTop = stk.top() + top;
                stk.push(top); // Push back the previous top
                stk.push(newTop);
            } 
            else if (s == "D") {
                // Double the last score
                stk.push(2 * stk.top());
            } 
            else if (s == "C") {
                // Remove the last score
                stk.pop();
            } 
            else {
                // Push the numeric score onto the stack
                stk.push(stoi(s));
            }
        }
        
        // Calculate the total sum
        int sum = 0;
        while (!stk.empty()) {
            sum += stk.top();
            stk.pop();
        }
        return sum;
    }
};
