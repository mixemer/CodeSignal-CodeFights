bool checkRows(std::vector<std::vector<int>> grid){
    
    for (int i = 0; i < 9; i++){
        std::set<int> test;
        for (int j = 0; j < 9; j++){
            test.insert(grid[i][j]);
        }
        if (test.size() != 9)
            return false;
    }
    
    return true;
}

bool checkColumns(std::vector<std::vector<int>> grid){
    
    for (int j = 0; j < 9; j++){
        std::set<int> test;
        for (int i = 0; i < 9; i++){
            test.insert(grid[i][j]);
        }
        if (test.size() != 9)
            return false;
    }
    
    return true;
}

bool check3x3Boxes(std::vector<std::vector<int>> grid){
    
    for (int i = 0; i < 9; i+=3){
        for (int j = 0; j < 9; j+=3){
            std::set<int> test;
            for (int r = i; r < i + 3; r++ ){
                for (int c = j; c < j + 3; c++){
                    test.insert(grid[r][c]);
                }
            }
            if (test.size() != 9)
                return false;
        }
    }
    
    return true;
}

bool sudoku(std::vector<std::vector<int>> grid) {
    return (checkRows(grid) && checkColumns(grid) && check3x3Boxes(grid));
}
 









