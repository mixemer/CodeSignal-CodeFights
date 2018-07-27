std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {
    
    int elem = k - 1;
    int mult = 2;
    while (elem < inputArray.size()){
        inputArray.erase(inputArray.begin()+elem);
        elem = (mult * k) - (mult);
        mult++;
    }
    return inputArray;
}
