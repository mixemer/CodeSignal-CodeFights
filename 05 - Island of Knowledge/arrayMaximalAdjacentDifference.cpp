int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    
    int maximalAbsoluteDiff = 0;
    
    for (int i = 0; i < inputArray.size()-1; i++){
        
        int absDiff = abs(inputArray[i] - inputArray[i+1]); // 1
        if (absDiff > maximalAbsoluteDiff){
            maximalAbsoluteDiff = absDiff; // 1
        }
        
    }
    
    return maximalAbsoluteDiff;
}
