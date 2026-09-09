class NumMatrix {
public:
    vector<vector<int>> sum;
    NumMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            vector<int> v;
            int s=0;
            for(int j=0;j<n;j++){
                s+=matrix[i][j];
                v.push_back(s);
            }
            sum.push_back(v);
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int s=0;
        for(int i=row1;i<=row2;i++){
            if(col1!=0){
                s+=(sum[i][col2]-sum[i][col1-1]);
            }
            else{
                s+=sum[i][col2];
            }
        }

        return s;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */