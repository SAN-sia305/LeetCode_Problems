class Solution {
public:
    int clumsy(int n) {
        stack<int> st;
        st.push(n--);
           
        int sum = 0;
        int x = 0;

        while(n>0){
            if(x%4 == 0){
                st.top()*=n;
                n--;
            }
            else if(x%4 == 1){
                st.top()/=n;
                n--;
            }
            else if(x%4 == 2){
                st.push(n);
                n--;
            }
            else if(x%4 == 3){
                st.push(n*-1);
                n--;
            }
        x++;
        }
        
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
    return sum;
    }

};