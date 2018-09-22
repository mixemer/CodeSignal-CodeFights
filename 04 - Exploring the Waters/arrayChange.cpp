int arrayChange(std::vector<int> inputArray) {
    
    int totalMove = 0;
    
    for (int i = 0; i < inputArray.size()-1; i++){
        if (inputArray[i+1] <= inputArray[i]){
            totalMove += (inputArray[i] + 1) - inputArray[i+1];
            inputArray[i+1] += (inputArray[i] + 1) - inputArray[i+1];
        }
    }
    
    return totalMove;

}
