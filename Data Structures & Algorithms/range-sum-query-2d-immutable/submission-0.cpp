class NumMatrix {

private:
std::vector<std::vector<int>> mat;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        mat = matrix;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 1; j < matrix[0].size(); j++){
                mat[i][j] += mat[i][j-1];
            }
        }
        for(int i = 0; i < matrix[0].size(); i++){
            for(int j = 1; j < matrix.size(); j++){
                mat[j][i] += mat[j-1][i];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if((row1 > 0) && (col1 > 0)){
            return mat[row2][col2] - mat[row1-1][col2] - mat[row2][col1-1] + mat[row1-1][col1-1];
        }
        if(col1 == 0 && row1 > 0){
            return mat[row2][col2] - mat[row1-1][col2];
        }
        if((row1 == 0) && (col1 > 0)){
            return mat[row2][col2] - mat[row2][col1-1];
        }
        if((row1 == 0) && (col1 == 0)){
            return mat[row2][col2];
        }

        return 0;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */