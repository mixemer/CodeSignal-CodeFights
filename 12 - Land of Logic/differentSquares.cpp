int differentSquares(std::vector<std::vector<int>> matrix) {
    if (matrix.size() < 2 || matrix[0].size() < 2)
        return 0;
    
    std::set< std::vector<int> > ms;
    for (int i = 0; i < matrix.size() - 1; i++){
        for (int j = 0; j < matrix[0].size() - 1; j++){
            std::vector<int> v0;
            for (int k = i; k <= i + 1; k++){
                for (int l = j; l <= j+1; l++){
                    v0.push_back(matrix[k][l]);
                }
            }
            ms.insert(v0);
            v0.clear();
        }
    }
    return (int)ms.size();
}