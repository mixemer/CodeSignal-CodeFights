int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    int prev = 0;
    for (int i = 0;i < k; i++){
        prev += inputArray[i];
    }
    
    int max = prev;
    
    for (int i = k; i < inputArray.size();i++){
        prev = prev - inputArray[i-k] + inputArray[i];
        
        if (prev > max){
            max = prev;
        }
    }
    
    return max;
}
