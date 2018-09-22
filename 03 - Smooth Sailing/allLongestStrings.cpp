std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    int longestSize = inputArray[0].size();
    std::vector<std::string> longestStrings;
    
    for (int i = 1; i < inputArray.size(); i++){
        int newLongestSize = inputArray[i].size();
        if (newLongestSize > longestSize)
            longestSize = newLongestSize;
    }
    
    for (int i = 0; i < inputArray.size(); i++){
        int sizeOfString = inputArray[i].size();
        if (longestSize == sizeOfString)
            longestStrings.push_back(inputArray[i]);
    }
    
    return longestStrings;
}
