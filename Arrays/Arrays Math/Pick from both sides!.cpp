int Solution::solve(vector<int> &A, int B) {
    int sum = 0;
    int i = 0;
    int maxi = 0;
    int l = A.size() - 1;
    int b = B;

    while(B--){// 
        sum = sum + A[i++];
    }
    int ans = sum;
    while(b--){
        sum -= A[--i];
        sum += A[l--];

        ans = max(sum, ans);
    }
    return ans;
}
