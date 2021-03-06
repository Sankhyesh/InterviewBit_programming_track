int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int res = 0, n = A.size();
    for(int i = 1; i<n; i++){
        res += max(abs(A[i-1] - A[i]), abs(B[i-1] - B[i]));
    }
    return res;
}
