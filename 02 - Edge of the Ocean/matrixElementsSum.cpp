int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    
    int totalCost = 0;
    
    for (int i = 0; i < matrix[0].size(); i++){
        for (int j = 0; j < matrix.size(); j++){
            if (matrix[j][i] == 0) break;
            totalCost += matrix[j][i];
        }
    }
    
    return totalCost;
    
}
