vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    vector<int> res;
    bool rev = false;
    int l = 0, r = m-1, t = 0, b = n-1;
    int dir = 0;

    while(l<=r && t<=b){
        if(dir == 0){
            for(int i = l; i<=r; i++){
                res.push_back(A[t][i]);
            }
            t++;
            dir = 1;
        }else if(dir == 1){
                for(int i = t; i<=b; i++){
                    res.push_back(A[i][r]);
                }
                r--;
                dir = 2;
        }else if(dir == 2){
            for(int i = r; i>=l; i--){
                res.push_back(A[b][i]);
            }
            b--;
            dir = 3;
        }else if(dir == 3){
            for(int i=b; i>=t; i--){
                res.push_back(A[i][l]);
            }
            l++;
            dir = 0;
        }
    }
    return res;
}
