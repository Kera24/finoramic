int Solution::threeSumClosest(vector<int> &A, int B) {
    int n = A.size();
    long sum = 0;
    long result = INT_MAX;
    sort(A.begin(), A.end());
    for(int i = 0; i < n-2; i++){
        int j = i+1, k = n-1;
        while(j < k){
            sum = A[i]+ A[j]+ A[k];
            if(sum == B){
                return B;
            }
            if(abs(sum - B) < abs(B- result)){
                result = sum;
            }
            else if (sum > B){
                k--;
            }
            else{
                j++;
            }
        }

    }
    return result;
}
