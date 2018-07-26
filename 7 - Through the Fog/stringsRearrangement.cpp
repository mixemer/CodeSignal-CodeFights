bool checkChars(string str1, string str2){
    int strsize = (int)str1.size();
    int count = 0;
    
    for (int i = 0; i < strsize; i++){
        
        if (str1[i] != str2[i])
            count++;
        if (count > 1)
            return false;
    }
    return (count == 1);
}
bool stringsRearrangement(std::vector<std::string> inputArray) {
    
    sort(inputArray.begin(), inputArray.end());
    int size = (int)inputArray.size();
    
    do{
        bool allMatch = false;
        
        for (int i = 0; i < size-1; i++){
            if ( checkChars(inputArray[i], inputArray[i+1]) )
                allMatch = true;
            else{
                allMatch = false;
                break;
            }
        }
        if (allMatch)
            return true;
    } while( next_permutation(inputArray.begin(), inputArray.end()) );
    
    return false;
}