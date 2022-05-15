int Solution::solve(vector<int> &A, int B) {
    int i = 0, n = A.size(), count = 0;

    while(i<n){
        int right = min(i + B - 1, n-1);
        int left = max(i-B+1, 0);
        bool bulbFound = false;
        while(left<=right){

            if(A[right] == 1){
                bulbFound = true;
                break;
            }

            right--;
        }
        if(!bulbFound){
            return -1;
        }
        count++;
        i = right + B;
    }
    return count;
}
