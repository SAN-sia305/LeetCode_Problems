/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   vector<int> nextGreaterElement(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n, 0);
        stack<int> st;
        st.push(0);
        for(int i=n-1; i>=0; i--){
            while(st.top() != 0 && st.top() <= arr[i]){
                st.pop();
            }
            ans[i] = st.top();
            st.push(arr[i]);
        }

        return ans;
    }


    vector<int> nextLargerNodes(ListNode* head) {
        if(head == NULL){
            return {};
        }
        vector<int> arr;
        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        vector<int> ans = nextGreaterElement(arr);
        return ans;
    }
};