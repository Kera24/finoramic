int Solution::braces(string A) {
    stack<char> st;
    int size = A.length();
    bool count = false;
    for(int i = 0; i< size; i++){
        if(A[i] == '+' || A[i] == '-' || A[i] == '*' || A[i] == '/' ){
            st.push(A[i]);
        }
        else if(A[i]== '('){
            st.push(A[i]);
        }
        else if(A[i]==')'){
            if(st.top() == '('){
                count = true;
            }
            while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/' ){
                st.pop();
            }
            st.pop();
        }
    }
    return count;
}