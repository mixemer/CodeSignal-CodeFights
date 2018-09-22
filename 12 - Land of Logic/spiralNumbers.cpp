std::vector<std::vector<int>> initilize2DVector(int n){
    std::vector<std::vector<int>> spiralNums;
    // initilize it with 0s
    for (int i = 0; i < n; i++){
        spiralNums.push_back(std::vector<int>(n));
    }
    return spiralNums;
}

std::vector<int> initilizeTurns(int n){
    int temp[] = {1,1,-1,-1};
    int b = 0;
    int SIZE = n + n + 2;
    vector<int> turns;
    for (int i = 0; i < SIZE; i++){
        turns.push_back(temp[b]);
        if (b == 3){
            b = 0;
        }else{
            b++;
        }
    }
    
    return turns;
}

std::vector<std::vector<int>> spiralNumbers(int n) {
    
    // decleare 2d int vector and initilize it with 0s
    std::vector<std::vector<int>> spiralNums = initilize2DVector(n);
    
    vector<int> turns = initilizeTurns(n);
    
    int turn = 0;
    int col = true;
    int r = 0;
    int c = 0;
    int count = 1;
    int i = 0;
    
    while (count <= n * n){
        if (col){
            if (spiralNums[r][c] == 0){
                spiralNums[r][c] = count;
                count++;
                c += turns[turn];
                i++;
                if (i == n || c < 0 || c > n-1){
                    c -= turns[turn];
                    r += turns[turn+1];
                    turn++;
                    col = false;
                    i=0;
                }
            }else{
                c += turns[turn+2];
                r += turns[turn+1];
                turn++;
                col = false;
                i=0;
            }
        }else{
            if (spiralNums[r][c] == 0){
                spiralNums[r][c] = count;
                count++;
                r += turns[turn];
                i++;
                if (i == n - 1 || r < 0 || r > n-1){
                    r -= turns[turn];
                    c += turns[turn+1];
                    turn++;
                    col = true;
                    i=0;
                }
            }else{
                r += turns[turn+2];
                c += turns[turn+1];
                turn++;
                col = true;
                i=0;
            }
        }
        
    }
    
    
    return spiralNums;
}