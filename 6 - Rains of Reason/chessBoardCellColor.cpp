bool checkColor(std::string cell) {
    
    int first = cell[0];
    int second = cell[1];
    
    return ( (first % 2 == 0) == (second % 2 == 0) );
}


bool chessBoardCellColor(std::string cell1, std::string cell2) {
    
    return ( checkColor(cell1) == checkColor(cell2) );
    
}