int chessKnight(std::string cell) {
    int count = 0;
    
    int f = cell[0];
    int s = cell[1] - 48;
    
    int j = 0;
    for (int i = -2; i <=2; i++){
        if (i != 0){
            if (i != 2)
                j++;
            if (s + i > 0 && s + i < 9){
                if (f - j >= 'a')
                    count++;
                if (f + j <= 'h')
                    count++;
                
                if (j >= 2)
                    j = 1;
            }
        }
    }
    
    return count;
}