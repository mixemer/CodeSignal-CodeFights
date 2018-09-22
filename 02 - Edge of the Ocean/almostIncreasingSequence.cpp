bool almostIncreasingSequence(std::vector<int> sequence) {
    
    int strikes = 0;
    
    int max = -100000;
    int secondMax = -100000;
    
    for (int i = 0; i < sequence.size(); i++){
        if (sequence[i] > max){
            secondMax = max;
            max = sequence[i];
        }else if (sequence[i] > secondMax){
            max = sequence[i];
            strikes++;
        }else {
            strikes++;
        }
    }
    return strikes < 2;
}
