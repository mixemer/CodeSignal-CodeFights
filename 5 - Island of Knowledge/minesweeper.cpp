int  calculate(vector<vector<bool>> m, int r, int c){
    int total = 0;
    for (int i = (r - 1); i <= (r + 1); i++){
        if (i >= 0 && i < m.size()){
            for (int j = (c - 1); j <= (c + 1); j++){
                if (j >= 0 && j < m[i].size()){
                    if (m[i][j]) total++;
                }
            }
        }
    }
    
    if (m[r][c]) total--;
    
    return total;
}

std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    vector<vector<int>> m;
    
    for (int i = 0; i < matrix.size(); i++){
        m.push_back(vector<int>());
        for (int j = 0; j < matrix[i].size(); j++){
            m[i].push_back(calculate(matrix, i, j));
        }
    }
    return m;
}