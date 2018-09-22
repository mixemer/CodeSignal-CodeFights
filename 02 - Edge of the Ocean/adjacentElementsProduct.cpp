int adjacentElementsProduct(std::vector<int> inputArray) {
    int result = inputArray[0] * inputArray[1];
    
    for (int i = 1; i < inputArray.size()-1; i++){
        int nproduct = inputArray[i] * inputArray[i+1];
        if (nproduct > result){
            result = nproduct;
        }
    }
    
    return result;
}
